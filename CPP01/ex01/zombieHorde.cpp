/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:12:00 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/24 10:20:54 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde (int N, std::string name)
{
	Zombie *newZ = NULL;
	size_t	len;

	if (N < 1)
		return newZ;
	if (name.empty() || name.length() == 0)
		name = "Foo";
	len = name.length();
	name.resize(len + 1, 48);
	newZ = new Zombie[N];
	for (int i = 0; i < N; i++){
		newZ[i].setName(name);
	}
	return newZ;
}