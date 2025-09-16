/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:12:33 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/15 10:40:13 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <climits>
#include <cstdlib>

# define BLUE "\033[34m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class ScalarConverter {
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
	public :
		void static covert(std::string str);
} ;


//The static_cast can be used to convert between related types, such as numeric types or pointers in the same inheritance hierarchy.//
#endif