/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:13:27 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 15:34:48 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog(const Dog& other);
		Dog& operator= (const Dog& other);
		void makeSound() const;
		~Dog();
} ;
#endif