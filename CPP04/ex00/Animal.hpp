/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:04:18 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/06 14:07:45 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(const Animal& other);
		Animal &operator= (const Animal& other);
		void makeSound();
} ;