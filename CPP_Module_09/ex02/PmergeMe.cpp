/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:00:38 by mulken            #+#    #+#             */
/*   Updated: 2024/04/03 06:15:19 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void printContainer(const T &container)
{
    for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
    {
        std::cout << *it << " ";
    }
}

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        this->list = other.list;
        this->vec = other.vec;
    }
    return *this;
}

void PmergeMe::init(char **argv, int argc)
{
    std::cout << "Before: ";
    for (int i = 1; argv[i]; i++)
    {
        std::string str(argv[i]);
        std::istringstream iss(str);
        unsigned int num;
        while (iss >> num)
        {
            list.push_back(std::stoul(str));
            vec.push_back(std::stoul(str));
        }
        std::cout << argv[i] << " ";
    }
    mergeList(argc);
    mergeVector(argc);
    }
void PmergeMe::mergeList(int argc)
{

    std::clock_t start = std::clock();

    std::list<unsigned int> list1;

    list1 = mergeStartList(this->list);
    
    std::clock_t end = std::clock();
    
    double duration = static_cast<double>(end - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;

    std::cout << std::endl << "After: " ;

    printContainer(list1);

    std::cout << std::endl << "Time to process a range of " << argc - 1 << " elements with std::list<unsigned int> : "
			<< duration << " ms" << std::endl;
}


std::list<unsigned int> PmergeMe::mergeStartList(std::list<unsigned int> &list)
{
    if(list.size() <= 1)
        return list;

    int mid = list.size() / 2;

    std::list<unsigned int> left;
    std::list<unsigned int> right;

    std::list<unsigned int>::iterator it = list.begin();

    for (int i = 0; i < mid; i++)
    {
        left.push_back(*it);
        it++;
    }

    for (int i = mid; i < list.size(); i++)
    {
        right.push_back(*it);
        it++;
    }

    left = mergeStartList(left);
    right = mergeStartList(right);

    return mergeSortList(left, right);

}

std::list<unsigned int> PmergeMe::mergeSortList(std::list<unsigned int> &left, std::list<unsigned int> &right)
{

    std::list<unsigned int> result;

    while (!left.empty() && !right.empty())
    {
        if(left.front() <= right.front())
        {
            result.push_back(left.front());
            left.pop_front();
        }
        else
        {
            result.push_back(right.front());
            right.pop_front();
        }
    }

    while (!left.empty())
    {
        result.push_back(left.front());
        left.pop_front();
    }

    while (!right.empty())
    {
        result.push_back(right.front());
        right.pop_front();
    }

    return result;
}


void PmergeMe::mergeVector(int argc)
{

    std::clock_t start = std::clock();
    
    std::vector<unsigned int> vec1;
    
    vec1 = mergeStartVector(this->vec);
    
    std::clock_t end = std::clock();
    
    double duration = static_cast<double>(end - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
    
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector<unsigned int> : "
			<< duration << " us" << std::endl;
    
}

std::vector<unsigned int> PmergeMe::mergeStartVector(std::vector<unsigned int> &vec)
{
    if(vec.size() <= 1)
        return vec;

    int mid = vec.size() / 2;

    std::vector<unsigned int> left;
    std::vector<unsigned int> right;

    for (int i = 0; i < mid; i++)
    {
        left.push_back(vec[i]);
    }

    for (int i = mid; i < vec.size(); i++)
    {
        right.push_back(vec[i]);
    }

    left = mergeStartVector(left);
    right = mergeStartVector(right);

    return mergeSortVector(left, right);
}

std::vector<unsigned int> PmergeMe::mergeSortVector(std::vector<unsigned int> &vec1, std::vector<unsigned int> &vec2)
{
    std::vector<unsigned int> result;

    while (!vec1.empty() && !vec2.empty())
    {
        if(vec1.front() <= vec2.front())
        {
            result.push_back(vec1.front());
            vec1.erase(vec1.begin());
        }
        else
        {
            result.push_back(vec2.front());
            vec2.erase(vec2.begin());
        }
    }

    while (!vec1.empty())
    {
        result.push_back(vec1.front());
        vec1.erase(vec1.begin());
    }

    while (!vec2.empty())
    {
        result.push_back(vec2.front());
        vec2.erase(vec2.begin());
    }

    return result;
}