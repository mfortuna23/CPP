/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:41:16 by mfortuna          #+#    #+#             */
/*   Updated: 2025/07/01 16:23:43 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
	private :
		std::string	name;
		bool		isSigned;
		int			reqSign;
		int			reqExec;
	public :
		Form();
		Form(std::string nName, int sign, int exec);
		Form(const Form &other);
		Form &operator= (const Form &other);
		std::string getName() const;
		bool 		getIsSigned() const;
		int			getReqSign() const;
		int			getReqExec() const;
		void		setName(std::string other);
		void		setIsSigned(bool other);
		void		setReqSign(int other);
		void		setReqExec(int other);
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