/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:41:16 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/12 13:35:57 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private :
		const std::string	name;
		bool				isSigned;
		const int			reqSign;
		const int			reqExec;
	public :
		Form();
		Form(std::string nName, int sign, int exec);
		Form(const Form &other);
		Form &operator= (const Form &other);
		std::string getName() const;
		bool 		getIsSigned() const;
		int			getReqSign() const;
		int			getReqExec() const;
		void		beSigned(const Bureaucrat &other);
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		~Form();
} ;

std::ostream &operator<<(std::ostream &out, const Form &other);

#endif