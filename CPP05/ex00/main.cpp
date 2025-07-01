/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:16:53 by mfortuna          #+#    #+#             */
/*   Updated: 2025/07/01 13:34:13 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void){
	try {
		Bureaucrat a("Ana", 1);
		std::cout << a << std::endl;
		++a;
		std::cout << a << std::endl;
	}
	catch (std::exception &e){
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	try {
		Bureaucrat b("Bob", 151);
	}
	catch (std::exception &e){
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
}