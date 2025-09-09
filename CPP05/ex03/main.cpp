/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:16:53 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/09 13:41:39 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void){
	AForm *a = NULL;
	AForm *b = NULL;
	AForm *c = NULL;
	try {
		Intern intern;
		Bureaucrat bob("Bob", 20);
		Bureaucrat bob2("Bob the second", 2);
		a = intern.makeForm("shrubbery creation", "treeeeeeeees");
		b = intern.makeForm("robotomy request", "Bob the second");
		c = intern.makeForm("presidential pardon", "Bob");
		std::cout << bob << std::endl;
		std::cout << bob2 << std::endl;
		bob.signAForm(*a);
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;
		std::cout << *c << std::endl;
		bob2.executeForm(*a);
		bob.signAForm(*b);
		bob2.executeForm(*b);
		bob.signAForm(*c);
		bob2.executeForm(*c);
		
	}
	catch (std::exception &e){
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	if (a)
		delete a;
	if (b)
		delete b;
	if (c)
		delete c;
}