/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:35:09 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/08 15:30:34 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45){
	target = "no Target :(";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", 72, 45){
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45){
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	target = other.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const {return target;}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->getIsSigned()){
		std::cout << executor.getName() << " couldn’t execute RobotomyRequestForm because ";
		throw FormNotSignedException();
	}
	if (executor.getGrade() > this->getReqExec()){
		std::cout << executor.getName() << " couldn’t execute RobotomyRequestForm because ";
		throw GradeTooLowException();
	}
	std::cout << "...*some drilling noises*..." << std::endl;
	for (int i = 0 ; i < 900000000; i++);
	std::cout << "...*more drilling noises*..." << std::endl;
	for (int i = 0 ; i < 900000000; i++);
	std::cout << "...*drilling noises*..." << std::endl;
	for (int i = 0 ; i < 900000000; i++);
	std::cout << "Target :" << target;
	std::srand(std::time(0));
	int x = rand() % 2;
	if (x == 0)
		std::cout << " was successfully robotomized" << std::endl;
	else
		std::cout << " wasn’t robotomized :(" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){}
