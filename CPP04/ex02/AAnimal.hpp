/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:04:18 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/12 17:19:41 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include <string>
#pragma once

#define BLUE "\033[34m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const std::string nType);
		AAnimal(const AAnimal& other);
		AAnimal &operator= (const AAnimal& other);
		virtual void makeSound() const = 0;
		std::string getType(void) const;
		void		setType(const std::string nType);
} ;

#endif