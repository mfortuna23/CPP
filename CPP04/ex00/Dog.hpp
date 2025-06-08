/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:13:27 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/07 16:22:28 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Cat.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog(const Dog& other);
		Dog& operator= (const Dog& other);
		void makeSound() const;
		~Dog();
} ;
#endif