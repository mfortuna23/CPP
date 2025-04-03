/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:12:00 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/03 12:27:00 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde (int n, std::string name)
{
	Zombie *newZ = NULL;
	if (n < 1)
		return newZ;
	if (name.empty() || name.length() == 0)
		name = "Foo";
	newZ = new Zombie[n];
	for (int i = 0; i < n; i++){
		newZ[i].setName(name);
		newZ[i].annouce();
	}
	return newZ;
}