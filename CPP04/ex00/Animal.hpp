/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:04:18 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 15:23:16 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#pragma once

#include <iostream>
#include <string>
#define BLUE "\033[34m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const std::string nType);
		Animal(const Animal& other);
		Animal &operator= (const Animal& other);
		virtual void makeSound() const;
		std::string getType(void) const;
		void		setType(const std::string nType);
} ;

#endif