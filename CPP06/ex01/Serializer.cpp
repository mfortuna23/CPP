/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:00:05 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/15 11:43:55 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}
Serializer::Serializer(const Serializer &other){*this = other;}
Serializer &Serializer::operator=(const Serializer &other){(void)other; return *this;};

uintptr_t Serializer::serialize(Data *ptr){
	uintptr_t a;
	a = reinterpret_cast<uintptr_t>(ptr);
	return a;

}

Data *Serializer::deserialize(uintptr_t raw){
	Data *ptr = NULL;
	ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}

Serializer::~Serializer(){};