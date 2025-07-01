/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:23:33 by mfortuna          #+#    #+#             */
/*   Updated: 2025/07/01 15:54:34 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(){}
Form::Form(std::string nName, int sign, int exec){
	name = nName;
	isSigned = false;
	reqSign = sign;
	reqExec = exec;
}
Form::Form(const Form &other){
	*this = other;
}
Form &Form::operator= (const Form &other){
	name = other.getName();
	isSigned = other.getIsSigned();
	reqSign = other.getReqSign();
	reqExec = other.getReqExec();
	return *this;
}
std::string Form::getName() const {return name;}
bool 		Form::getIsSigned() const {return isSigned;}
int			Form::getReqSign() const {return reqSign;}
int			Form::getReqExec() const {return reqExec;}
void		Form::setName(std::string other){name = other;}
void		Form::setIsSigned(bool other){isSigned = other;}
void		Form::setReqSign(int other){reqSign = other;}
void		Form::setReqExec(int other){reqExec = other;}
const char* Form::GradeTooLowException::what() const throw(){
	return "Grade too low";
}
const char* Form::GradeTooHighException::what() const throw(){
	return "Grade too high";
}
void		Form::beSigned(const Bureaucrat &other) {
	if (other.getGrade() > reqSign){
		std::cout << other.getName() << " couldn’t sign " << name << "because ";
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