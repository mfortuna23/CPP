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

AForm::AForm(): name("Default Aform"), reqSign(1), reqExec(1){
	isSigned = false;
}
AForm::AForm(std::string nName, int sign, int exec) : name(nName), reqSign(sign), reqExec(exec){
	if (reqExec < 1 || reqSign < 1)
		throw GradeTooHighException();
	if (reqExec > 150 || reqSign > 150)
		throw GradeTooLowException();
	isSigned = false;
}
AForm::AForm(const AForm &other) : name(other.getName()), reqSign(other.getReqSign()), reqExec(other.getReqExec()){
	isSigned = other.getIsSigned();
}
AForm &AForm::operator= (const AForm &other){
	isSigned = other.getIsSigned();
	return *this;
}
std::string AForm::getName() const {return name;}
bool 		AForm::getIsSigned() const {return isSigned;}
int			AForm::getReqSign() const {return reqSign;}
int			AForm::getReqExec() const {return reqExec;}
void		AForm::setIsSigned(bool other){isSigned = other;}
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