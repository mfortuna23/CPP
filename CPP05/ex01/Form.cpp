/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:23:33 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/12 13:37:26 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default Form"), reqSign(1), reqExec(1){}
Form::Form(std::string nName, int sign, int exec) : name(nName), reqSign(sign), reqExec(exec){
	if (reqExec < 1 || reqSign < 1)
		throw GradeTooHighException();
	if (reqExec > 150 || reqSign > 150)
		throw GradeTooLowException();
	isSigned = false;
}
Form::Form(const Form &other): name(other.getName()), reqSign(other.getReqSign()), reqExec(other.getReqExec()) {
	isSigned = other.getIsSigned();
}
Form &Form::operator= (const Form &other){
	isSigned = other.getIsSigned();
	return *this;
}
std::string Form::getName() const {return name;}
bool 		Form::getIsSigned() const {return isSigned;}
int			Form::getReqSign() const {return reqSign;}
int			Form::getReqExec() const {return reqExec;}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade too low";
}
const char* Form::GradeTooHighException::what() const throw(){
	return "Grade too high";
}
void		Form::beSigned(const Bureaucrat &other) {
	if (other.getGrade() > reqSign){
		std::cout << other.getName() << " couldn’t sign " << name << " because ";
		throw GradeTooLowException();
	}
	std::cout << other.getName() << " signed " << name << std::endl;
	isSigned = true;
}

Form::~Form(){}

std::ostream &operator<<(std::ostream &out, const Form &other){
	out << "Form: " << other.getName();
	if (other.getIsSigned())
		out << " is signed ";
	else
		out << " is not signed ";
	out << "requires minimum " << other.getReqSign() << " grade to sign and minimum " << other.getReqExec() << " grade to execute";
	return out;
}