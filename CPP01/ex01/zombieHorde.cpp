/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:12:00 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/06 10:35:40 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde (int N, std::string name)
{
	Zombie *newZ = NULL;

	if (N < 1){
		std::cout << "Error, 1 zombie min" << std::endl;
		return newZ;}
	if (name.empty() || name.length() == 0)
		name = "Foo";
	newZ = new Zombie[N];
	for (int i = 0; i < N; i++){
		newZ[i].setName(name);
	}
	return newZ;
}