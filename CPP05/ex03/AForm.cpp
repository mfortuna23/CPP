/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:23:33 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/08 11:27:13 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(){}
AForm::AForm(std::string nName, int sign, int exec){
	name = nName;
	isSigned = false;
	reqSign = sign;
	reqExec = exec;
}
AForm::AForm(const AForm &other){
	*this = other;
}
AForm &AForm::operator= (const AForm &other){
	name = other.getName();
	isSigned = other.getIsSigned();
	reqSign = other.getReqSign();
	reqExec = other.getReqExec();
	return *this;
}
std::string AForm::getName() const {return name;}
bool 		AForm::getIsSigned() const {return isSigned;}
int			AForm::getReqSign() const {return reqSign;}
int			AForm::getReqExec() const {return reqExec;}
void		AForm::setName(std::string other){name = other;}
void		AForm::setIsSigned(bool other){isSigned = other;}
void		AForm::setReqSign(int other){reqSign = other;}
void		AForm::setReqExec(int other){reqExec = other;}
const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade too low";
}
const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade too high";
}

const char* AForm::FormNotSignedException::what() const throw(){
	return "Sign the form before execution";
}

void		AForm::beSigned(const Bureaucrat &other) {
	if (other.getGrade() > reqSign){
		std::cout << other.getName() << " couldn’t sign " << name << " because ";
		throw GradeTooLowException();
	}
	std::cout << other.getName() << " signed " << name << std::endl;
	isSigned = true;
}

AForm::~AForm(){}

std::ostream &operator<<(std::ostream &out, const AForm &other){
	out << "AForm: " << other.getName();
	if (other.getIsSigned())
		out << " is signed ";
	else
		out << " is not signed ";
	out << "requires minimum " << other.getReqSign() << " grade to sign and minimum " << other.getReqExec() << " grade to execute";
	return out;
}