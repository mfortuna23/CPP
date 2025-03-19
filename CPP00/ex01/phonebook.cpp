/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:19:50 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/19 14:35:48 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(void)
{
	std::string temp;
	//int		i = 0;
	
	std::cout << "Welcome to your phonebook" << std::endl;
	std::cout << "hello";
	std::cin >> temp;
	
	while (temp == "EXIT"){
	}
	/* while (strcmp(temp, "EXIT")){
		if (!strncmp(s, "ADD ", 4)){
			i++;
			if(i > 8)
				std::cout << "Contact n1 was deleted\n";
			std::cout << "hello\n";
			std::cout << strchr(s, ' ');
			std::cout <<" was added\n";
		}
		else if (!strncmp(s, "SEARCH ", 7)){
			std::cout << strchr((char *)s, ' ');
		}
		else
			std::cout <<"unknown command, please try \"ADD\" or \"SEARCH\"";
		std::cin >> s;			
	} */
	std::cout << "All contacts have been delseted\n";
	return (0);
}
