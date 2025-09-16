/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:55:13 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/15 11:50:02 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <string>
#include <stdint.h>

# define BLUE "\033[34m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

struct Data{
	std::string someData;
	int 		justAValue;
} ;

class Serializer {
	private :
		Serializer();
		Serializer(const Serializer &other);
		Serializer &operator=(const Serializer &other);
		~Serializer();
	public :
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
		
} ;

//reinterpret_cast converts any pointer type to any other pointer type, and can also convert between pointers and sufficiently large integral types.
// It doesn't perform any runtime checks or conversions - it just treats the same bits as a different type.
#endif