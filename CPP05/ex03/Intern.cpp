/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:56:20 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/09 14:22:26 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern &other){*this = other;}
Intern &Intern::operator=(const Intern &other){(void)other; return *this;}
AForm *Intern::makeShrubbery(std::string target) {return new ShrubberyCreationForm(target);}
AForm *Intern::makeRobotomy(std::string target) {return new RobotomyRequestForm(target);}
AForm *Intern::makePresidential(std::string target) {return new PresidentialPardonForm(target);}

AForm *Intern::makeForm(std::string form, std::string target){
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(Intern::*actions[3])(std::string) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	int i = 0;
	while(i < 3){
		if (form == forms[i])
			return (this->*actions[i])(target);
		i++;
	}
	std::cout << "Intern can't make " << form << " form because ";
	throw FormNotFound();
	return NULL;
}
const char* Intern::FormNotFound::what() const throw(){
	return "Form not found";
}
Intern::~Intern(){}