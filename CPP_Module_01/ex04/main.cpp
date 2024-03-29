/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:31 by mulken            #+#    #+#             */
/*   Updated: 2024/02/06 17:02:40 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string sed(std::string src, std::string search, std::string replace)
{
	size_t i = 0;
	size_t current;

	while (i < src.length())
	{
		current = src.find(search, i);
		if (current != std::string::npos)
		{
			src.erase(current, search.length());
			src.insert(current, replace.c_str(), replace.length());
		}
		i += replace.length();
	}
	return (src);
}

bool checkArgs(std::string search, std::string replace)
{
	if (search.empty() || replace.empty())
		return (true);
	return (false);
}

int main(int ac, char** av)
{
	if (ac == 4)
	{
		std::string outfileName = av[1];
		outfileName.append(".replace");
		std::fstream in(av[1], std::fstream::in);
		if(in.fail())
		{
			std::cout << av[1] << std::endl;
			std::cout << "cannot open file" << std::endl;
			return (1);
		}
		std::fstream out(outfileName, std::fstream::trunc | std::fstream::out);
		if(out.fail())
		{
			std::cout << "cannot open file" << std::endl;
			in.close();
			return (1);
		}
		if (checkArgs(av[2], av[3]))
		{
			std::cout << "empty args" << std::endl;
			in.close();
			out.close();
			return (1);
		}
		std::string current;
		std::string res;
		while (getline(in, current))
		{
			res = sed(current, av[2], av[3]);
			if (current.empty())
				out << std::endl;
			else
				out << res << std::endl;
		}
		in.close();
		out.close();
	}
	else
		std::cout << "enter a filename, a word to search and a word to replace" << std::endl;
}
