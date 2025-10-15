/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:37:42 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/15 12:29:23 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stack>

# define BLUE "\033[34m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class RPN {
	public :
		std::stack<int> calc;
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		void run(std::string av);
		void calculate(char c);
		~RPN();
} ;

RPN::RPN(){}
RPN::RPN(const RPN &other){ *this = other;}
RPN &RPN::operator=(const RPN &other){
	calc = other.calc;
	return *this;
}
bool checkNbr(std::string num){
	if (num.length() != 1 || num[0] > '9' || num[0] < '0')
		if (num.length() != 1 || (num[0] != '+' && num[0] != '-' && num[0] != '/' && num[0] != '*')){
			std::cerr << RED << "Error\n" << RESET; throw(1);}
		return false;
	return true;
}
bool checkOp(std::string op){
	if (op.length() != 1 || (op[0] != '+' && op[0] != '-' && op[0] != '/' && op[0] != '*')){
		if (op.length() != 1 || op[0] > '9' || op[0] < '0'){
			std::cerr << RED << "Error\n" << RESET; throw(1);}
		return false;
		}
	return true;
}
void RPN::run(std::string av){
	std::stringstream input(av);
	std::string item;
	input >> item;
	if (checkNbr(item)){
		std::cerr << RED << "Error\n" << RESET; throw(1);}
	calc.push(std::atoi(item.c_str()));
	while(input){
		input >> item;
		if (checkNbr(item)){
			calc.pop(); calc.push(0); break ;}
		calc.push(std::atoi(item.c_str()));
		input >> item;
		if (checkOp(item)){
			calc.pop(); calc.pop(); calc.push(0); break ;}
		calculate(item[0]);
	}
	if (calc.size() == 0)
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

#endif