/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:16:53 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/08 15:24:34 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void){
	try {
		Bureaucrat a("Ana", 1);
		ShrubberyCreationForm b("treeees");
		RobotomyRequestForm rob("rob");
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.signAForm(b);
		a.executeForm(b);
		a.signAForm(rob);
		a.executeForm(rob);
		--a;
		std::cout << a << std::endl;
		
	}
	catch (std::exception &e){
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
}