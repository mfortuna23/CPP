/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:13:27 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/11 10:56:54 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain *dogBrain;
	public :
		Dog();
		Dog(const Dog& other);
		Dog& operator= (const Dog& other);
		void makeSound() const;
		~Dog();
} ;
#endif