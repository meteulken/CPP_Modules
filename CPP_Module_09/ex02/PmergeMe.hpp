/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:57:17 by mulken            #+#    #+#             */
/*   Updated: 2024/04/02 02:12:54 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <ctime>

class PmergeMe
{
    public:
        std::list<unsigned int> list;
        std::vector<unsigned int> vec;
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        void init(char** argv, int argc);
        void mergeList(int argc);
        void mergeVector(int argc);
        
        std::list<unsigned int> mergeStartList(std::list<unsigned int> &list);
        std::list<unsigned int> mergeSortList(std::list<unsigned int> &list1, std::list<unsigned int> &list2);
        
        std::vector<unsigned int> mergeStartVector(std::vector<unsigned int> &vec);
        std::vector<unsigned int> mergeSortVector(std::vector<unsigned int> &vec1, std::vector<unsigned int> &vec2);


};

#endif