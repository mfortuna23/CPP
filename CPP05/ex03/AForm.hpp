/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:41:16 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/12 13:47:06 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private :
		const std::string	name;
		bool		isSigned;
		const int			reqSign;
		const int			reqExec;
	public :
		AForm();
		AForm(std::string nName, int sign, int exec);
		AForm(const AForm &other);
		AForm &operator= (const AForm &other);
		std::string getName() const;
		bool 		getIsSigned() const;
		int			getReqSign() const;
		int			getReqExec() const;
		void		setIsSigned(bool other);
		void		beSigned(const Bureaucrat &other);
		void		virtual execute(Bureaucrat const &executor) const = 0;
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		virtual ~AForm();
} ;

std::ostream &operator<<(std::ostream &out, const AForm &other);

#endif