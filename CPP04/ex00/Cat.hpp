/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:39:40 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/07 16:19:26 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator= (const Cat& other);
		void makeSound() const;
		~Cat();
} ;

#endif