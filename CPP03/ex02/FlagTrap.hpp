/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:02:31 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/04 12:09:33 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
	public :
		FlagTrap();
		FlagTrap(std::string newName);
		FlagTrap(const FlagTrap& other);
		FlagTrap &operator=(const FlagTrap& other);
		void highFiveGuys(void);
		~FlagTrap();
} ;