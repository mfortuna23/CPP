/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:14:23 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/22 10:59:05 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define BLUE "\033[34m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

class ClapTrap{
	private:
		std::string name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap& t);
		ClapTrap& operator= (const ClapTrap& other);
		std::string	getName(void) const;
		void		setName(std::string newName);
		int			getHitPoints(void) const;
		void		setHitPoints(int n);
		int			getEnergyPoints(void) const;
		void		setEnergyPoints(int n);
		int			getAttackDamage(void) const;
		void		setAttackDamage(int n);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap();
} ;