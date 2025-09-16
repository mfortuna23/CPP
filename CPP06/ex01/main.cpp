/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:59:28 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/15 14:44:02 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (int argc, char** argv){
	if (argc != 1)
		return 1;
	Data a;
	(void)argv;
	a.justAValue = 42;
	a.someData = "aaaaah aaaaaaaaah";
	uintptr_t raw = Serializer::serialize(&a);
	Data *b = Serializer::deserialize(raw);
	std::cout << "data a just a value: " << a.justAValue << " and some data: " << a.someData << std::endl;
	std::cout << "data b just a value: " << b->justAValue << " and some data: " << b->someData << std::endl;
	return 0;
}