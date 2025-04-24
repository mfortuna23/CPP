/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:37:20 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/24 10:21:01 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstring>

class Zombie{
	private :
		std::string name ;
	public :
		Zombie();
		~Zombie();
		void		annouce(void);
		void		setName(std::string newName);
		std::string	getName(void);
} ;

Zombie *zombieHorde (int N, std::string name);

#endif