/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:11:29 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/06 10:56:57 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void	harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
	<< "pickle-specialketchup burger. I really do!" << std::endl;
}
void	harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You"
	<< " didn’t put enough bacon in my burger! If you did, I wouldn’t be"
	<< " asking for more!" << std::endl;
}
void	harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free." 
	<< " I’ve been coming for years, whereas you started working here just"
	<< " last month." << std::endl;
}
void	harl::error(void){
	std::cout <<  "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}
void	harl::complain(std::string level){
	std::string input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4){
		if (input[i] == level)
			break ;
		i++;
	}
	if (i >= 4){
		std::cout << level << ": is wrong. Plz try \"DEBUG\" \"INFO\""
		<< " \"WARNING\" \"ERROR\"" << std::endl;
		return ;
	}
	switch (i){
		case 0 :
			debug();
		case 1 :
			info();
		case 2 :
			warning();
		case 3 :
			error();
	}
}