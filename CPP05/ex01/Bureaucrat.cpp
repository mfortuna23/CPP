/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:50:31 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/12 13:07:32 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("Default Bureaucrat"){
	grade = 150;
}
Bureaucrat::Bureaucrat(const std::string &nName, int nGrade) : name(nName){
	if (nGrade < 1)
		throw GradeTooHighException();
	if (nGrade > 150)
		throw GradeTooLowException();
	this->grade = nGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other){
	*this = other;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
	grade = other.getGrade();
	return *this;
}
Bureaucrat &Bureaucrat::operator++(){
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
	return *this;
}
Bureaucrat &Bureaucrat::operator--(){
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
	return *this;
}
std::string Bureaucrat::getName() const{return name;}
int Bureaucrat::getGrade() const{return grade;}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low";
}

void Bureaucrat::signForm(Form &other){
	other.beSigned(*this);
}

Bureaucrat::~Bureaucrat(){}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other){
	out << other.getName() << ", bureaucrat grade " << other.getGrade();
	return out;
}