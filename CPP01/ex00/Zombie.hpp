/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:37:20 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/03 12:24:22 by mfortuna         ###   ########.fr       */
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
		void		annouce(void);
		void		setName(std::string newName){name = newName;};
		std::string	getName(void){return name;};
} ;

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif