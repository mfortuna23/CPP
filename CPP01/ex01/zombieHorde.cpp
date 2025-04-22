/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:12:00 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/04 16:00:43 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde (int n, std::string name)
{
	Zombie *newZ = NULL;
	size_t	len;

	if (n < 1)
		return newZ;
	if (name.empty() || name.length() == 0)
		name = "Foo";
	len = name.length();
	name.resize(len + 1, 48);
	newZ = new Zombie[n];
	for (int i = 0; i < n; i++){
		name.resize(len);
		name.resize(len + 1, i + 48);
		newZ[i].setName(name);
	}
	return newZ;
}