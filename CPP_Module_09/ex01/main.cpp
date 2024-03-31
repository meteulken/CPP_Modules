/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 07:46:47 by mulken            #+#    #+#             */
/*   Updated: 2024/03/30 07:56:50 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac ,char **av)
{
  if (ac == 2)
  {
    try
    {
      std::string str(av[1]);
      RPN rp(str);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
  }
  return 0;
}