/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:27:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/21 18:35:50 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

void	PhoneBook::AddContact(void)
{
	std::string input;
	int			number = 0;
	unsigned	i = 0;

	while (i < MAX_CONTACTS){
		if (elem[i].GetIndex() == 0)
			break ;
		i++;
	}
	if (i == MAX_CONTACTS){
		std::cout << "Reach maximum contacts" << std::endl;
		return ;
	}
	elem[i].SetIndex(i + 1);
	std::cout << "First name: ";
	std::getline(std::cin, input);
	elem[i].SetFirstName(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	elem[i].SetLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	elem[i].SetNickName(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	elem[i].SetDarkestSecret(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	elem[i].SetPhoneNumber(number);
	std::cin.clear();
	return ;
}

void	PhoneBook::Search(void)
{
	return ;
}