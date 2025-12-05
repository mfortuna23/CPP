/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:02:54 by mfortuna          #+#    #+#             */
/*   Updated: 2025/12/05 12:43:42 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//atencao a divisao por zero

RPN::RPN(){}
RPN::RPN(const RPN &other){ *this = other;}
RPN &RPN::operator=(const RPN &other){
	calc = other.calc;
	return *this;
}
bool checkNbr(std::string num){
	if (num.length() != 1 || !(num[0] <= '9' && num[0] >= '0'))
		return false;
	return true;
}
bool checkOp(std::string op){
	if (op.length() != 1 || (op[0] != '+' && op[0] != '-' && op[0] != '/' && op[0] != '*'))
		return false;
	return true;
}
void RPN::run(std::string av){
	std::stringstream input(av);
	std::string item;
	while(input){
		input >> item;
		if (checkNbr(item))
			calc.push(std::atoi(item.c_str()));
		else if (checkOp(item) && calc.size() > 1)
			calculate(item[0]);
		else if (!item.empty())
			throw(1);
		item.clear();
	}
	if (calc.size() != 1 || input)
		throw(1);
	std::cout << calc.top() << std::endl;
}
void RPN::calculate(char c){
	int second = calc.top(); calc.pop();
	int first = calc.top(); calc.pop();
	if (c == '+'){
		calc.push(first + second); return ;}
	if (c == '-'){
		calc.push(first - second); return ;}
	if (c == '/'){
		calc.push(first / second); return ;}
	if (c == '*'){
		calc.push(first * second); return ;}
	if (c < '9' && c > '0')
		throw (2);
	throw (1);
}
RPN::~RPN(){}