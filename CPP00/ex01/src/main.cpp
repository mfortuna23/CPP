/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:19:50 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/20 14:58:07 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(void)
{
	std::string input;
	int		i = 0;
	
	std::cout << "Welcome to your phonebook" << std::endl;
	std::cin >> input;
	
	while (input != "EXIT"){
		if (input == "ADD"){
			i++;
			if(i > 8)
				std::cout << "Contact n1 was deleted" << std::endl;
			std::cout << "NAME :" << std::endl;
			std::cin >> input;
		}
		else if (input == "SEARCH"){
			std::cout << "display ..." << std::endl;
		}
		else
			std::cout << "Wrong command, plz try \"ADD\" or \"SEARCH\" or \"EXIT\"" << std::endl;
		std::cin >> input;
	}
	std::cout << "All contacts have been deleted\n";
	return (0);
}
