/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 07:46:44 by mulken            #+#    #+#             */
/*   Updated: 2024/03/30 21:20:55 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
private:
    std::stack<int> Rpn;
public:
    RPN(std::string &av);
    RPN();
    RPN &operator=(const RPN &obj);
    RPN(const RPN &obj);
    ~RPN();
    void calculate(std::stack<int> &stack, std::stack<char> &operators);
};
#endif