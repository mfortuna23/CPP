/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:26:35 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/09 14:16:42 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public :
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		AForm *makeForm(std::string form, std::string target);
		class FormNotFound : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		AForm *makeShrubbery(std::string target);
		AForm *makeRobotomy(std::string target);
		AForm *makePresidential(std::string target);
		~Intern();
} ;