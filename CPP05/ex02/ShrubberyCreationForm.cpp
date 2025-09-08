/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:48:23 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/08 15:05:05 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137){
	target = "no Target :(";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("ShrubberyCreationForm", 145, 137){
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137){
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	target = other.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const {return target;}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (!this->getIsSigned()){
		std::cout << executor.getName() << " couldn’t execute ShrubberyCreationForm because ";
		throw FormNotSignedException();
	}
	if (executor.getGrade() > this->getReqExec()){
		std::cout << executor.getName() << " couldn’t execute ShrubberyCreationForm because ";
		throw GradeTooLowException();
	}
	createFile();
}

void ShrubberyCreationForm::createFile() const {
	std::stringstream filename;
	filename << target << "_shrubbery";
	std::ofstream myfile(filename.str().c_str());
	myfile 
	<< "\n  .-'- -.         .-'- -."
	<< "\n (       )       (       )"
	<< "\n(  ,      )     (  ,      )"
	<< "\n ( \'./  .'       ( \'./  .'"
	<< "\n  '-| |-'         '-| |-'"
	<< "\n    | |             | |"
	<< "\n,,,,|.|,,,      ,,,,|.|,,,"
	<< "\n  .-'- -.         .-'- -."
	<< "\n (       )       (       )"
	<< "\n(  ,      )     (  ,      )"
	<< "\n ( \'./  .'       ( \'./  .'"
	<< "\n  '-| |-'         '-| |-'"
	<< "\n    | |             | |"
	<< "\n,,,,|.|,,,      ,,,,|.|,,,";
	myfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}