/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:39:40 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/11 13:07:22 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#pragma once

class Cat : public Animal {
	private :
		Brain *catBrian;
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator= (const Cat& other);
		void makeSound() const;
		void copyBrain(const Cat& other);
		void addIdeas(std::string newIdea);
		void printIdeas();
		~Cat();
} ;

#endif