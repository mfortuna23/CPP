/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:39:11 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/08 15:02:09 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5){
	target = "no Target :(";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", 25, 5){
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 25, 5){
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	target = other.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const {return target;}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!this->getIsSigned()){
		std::cout << executor.getName() << " couldn’t execute PresidentialPardonForm because ";
		throw FormNotSignedException();
	}
	if (executor.getGrade() > this->getReqExec()){
		std::cout << executor.getName() << " couldn’t execute PresidentialPardonForm because ";
		throw GradeTooLowException();
	}
	std::cout << target << " has been pardoned by Zaphod Beeblebrox";
}

PresidentialPardonForm::~PresidentialPardonForm(){}