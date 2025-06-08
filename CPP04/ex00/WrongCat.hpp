/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:39:40 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/08 11:16:10 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator= (const WrongCat& other);
		void makeSound() const;
		~WrongCat();
} ;

#endif