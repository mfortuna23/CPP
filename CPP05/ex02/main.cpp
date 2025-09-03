/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:16:53 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/03 15:19:08 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void){
	try {
		Bureaucrat a("Ana", 1);
		Form b("exam", 1, 1);
		Form c(b);
		std::cout << a << std::endl;
		a.signForm(b);
		--a;
		a.signForm(c);
		
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