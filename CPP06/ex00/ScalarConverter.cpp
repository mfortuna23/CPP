/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:22:34 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/16 15:02:03 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <cmath>

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){*this = other;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){(void)other; return *this;}

ScalarConverter::~ScalarConverter(){}

bool isItPrint(std::string str){
	for (size_t i = 0; i < str.length(); i++){
		if (!std::isprint(str[i]))
			return false;
	}
	return true;
}

int checkForType(std::string str){
	if (!isItPrint(str))
		return 4;
	if (str.length() == 1 && !std::isdigit(str[0]))
		return 0;
	if (str == "nan" || str == "-inf" || str == "+inf")
		return 3;
	if (str == "nanf" || str == "-inff" || str == "+inff")
		return 2;
	size_t i = 0, points = 0;
	while (i < str.length()){
		if (!std::isdigit(str[i])){
			if (str[i] == '.')
				points++;
			if (str[i] == 'f' && i == (str.length() - 1))
				return 2;
			if (str[i] != '-' && str[i] != '.' && str[i] != 'f')
				return 4;
		}
		i++;
	}
	if (std::atol(str.c_str()) > INT_MAX || std::atol(str.c_str()) < INT_MIN)
		return 4 ;
	if (points == 0)
		return 1;
	if (points == 1)
		return 3;
	return 4;
}
void printChar(char c){
	int i = static_cast<int>(c);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << i << ".0f" << std::endl;
	std::cout << "double: " << i << ".0" << std::endl;
}
void printInt(int i){
	std::cout << "char: ";
	if (std::isprint(static_cast<char>(i)))
		std::cout << static_cast<char>(i) << std::endl;
	else if(i >= 0 && i < 128) // if ascii
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << i << ".0f" << std::endl;
	std::cout << "double: " << i << ".0" << std::endl;
}

void printDouble(float value) {
	if (value == std::floor(value))
		std::cout << std::fixed << std::setprecision(1) << value;
	else
		std::cout << value;
}

void printFloat(float f){
	std::cout << "char: ";
	if (std::isprint(static_cast<char>(f)))
		std::cout << static_cast<char>(f) << std::endl;
	else if(f >= 0 && f < 128) // if ascii
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	if ((static_cast<long>(f) <= INT_MAX && static_cast<long>(f) >= INT_MIN))
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: ";
	printDouble(f);
	std::cout << "f" <<std::endl;
	std::cout << "double: ";
	printDouble(f);
	std::cout << std::endl;
}

void ScalarConverter::covert(std::string str){
	switch (checkForType(str)){
		case 0 :
			printChar(str[0]); break ;
		case 1 :
			printInt(std::atoi(str.c_str())); break ;
		case 2 :
			printFloat(std::atof(str.c_str()));	break ;
		case 3 :
			printFloat(std::atof(str.c_str())); break ;
		default :
			std::cout << RED << "invalid input" << RESET << std::endl;
	}
}