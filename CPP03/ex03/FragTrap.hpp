/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:02:31 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 14:38:36 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string newName);
		FragTrap(const FragTrap& other);
		FragTrap &operator=(const FragTrap& other);
		void highFiveGuys(void);
		~FragTrap();
} ;