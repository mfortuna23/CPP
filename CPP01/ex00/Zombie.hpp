/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:37:20 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/27 16:12:30 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

class Zombie{
	private :
		std::string name ;
	public :
		void	annouce(void);
		Zombie *newZombie(std::string name);
		void	randomChump(std::string name);
} ;
