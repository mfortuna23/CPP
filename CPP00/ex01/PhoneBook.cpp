/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:27:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/27 15:15:46 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

int		PhoneBook::maxContacts(void)
{
	int i = 0;
	while (i < MAX_CONTACTS){
		if (elem[i].getIndex() == 0)
			break ;
		i++;
	}
	if (i < MAX_CONTACTS){
		elem[i].setIndex(i + 1);
		return i;
	}
	for (int i = 1; i < MAX_CONTACTS; i++){
		elem[i - 1].setFirstName(elem[i].getFirstName());
		elem[i - 1].setLastName(elem[i].getLastName());
		elem[i - 1].setNickName(elem[i].getNickName());
		elem[i - 1].setPhoneNumber(elem[i].getPhoneNumber());
		elem[i - 1].setDarkestSecret(elem[i].getDarkestSecret());
	}
	return (MAX_CONTACTS - 1);
}

std::string tenChars(std::string input)
{
	if (input.length() < 10)
		return input;
	input.resize(9);
	input.resize(10, '.');
	return input;
}

bool	is_print(std::string n)
{
	for (unsigned i = 0; i < n.length(); i++){
		if(!std::isprint(n[i]))
			return false;
	}
	return true;
}

bool	is_number(std::string n)
{
	for (unsigned i = 0; i < n.length(); i++){
		if(!std::isdigit(n[i]))
			return false;
	}
	return true;
}

void	PhoneBook::addContact(void)
{
	std::string fn; std::string ln; std::string	nn;
	std::string ds; std::string n; int i = 0;

	std::cout << "First name: ";
	std::getline(std::cin, fn);
	if (std::cin.eof() || fn.empty() || !is_print(fn)){
		std::cout << "Error" << std::endl;
		return ;
	}
	std::cout << "Last name: ";
	std::getline(std::cin, ln);
	if (std::cin.eof() || ln.empty() || !is_print(ln)){
		std::cout << "Error" << std::endl;
		return ;
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, nn);
	if (std::cin.eof() || nn.empty() || !is_print(nn)){
		std::cout << "Error" << std::endl;
		return ;
	}
	std::cout << "Darkest secret: ";
	std::getline(std::cin, ds);
	if (std::cin.eof() || ds.empty() || !is_print(ds)){
		std::cout << "Error" << std::endl;
		return ;
	}
	std::cout << "Phone number: ";
	std::getline(std::cin, n);
	if (std::cin.eof() || n.empty() || !is_number(n) || !is_print(n)){
		std::cout << "Error" << std::endl;
		return ;
	}
	if (nContacts < 8)
		nContacts++;
	i = PhoneBook::maxContacts();
	elem[i].setContact(fn, ln, nn, ds, n);
	
}

void	PhoneBook::search(void)
{
	std::string input;
	if (elem[0].getIndex() == 0){
		std::cout << "You have no saved contacts" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	for (int i = 0; i < MAX_CONTACTS && elem[i].getIndex() > 0; i++){
		std::cout << std::setw(10) << elem[i].getIndex() << "|";
		std::cout << std::setw(10) << tenChars(elem[i].getFirstName()) << "|";
		std::cout << std::setw(10) << tenChars(elem[i].getLastName()) << "|";
		std::cout << std::setw(10) << tenChars(elem[i].getNickName()) << std::endl;
	}
	std::cout << "Enter the index of the contact you want to see" << std::endl;
	getline(std::cin, input);
	if (std::cin.eof() || input.empty() || !is_number(input) || input.length() > 1 || \
	input[0] > (nContacts + 48) || input[0] == '0') {
		std::cout << "Error" << std::endl;
		return ;
	}
	std::cout << "First name: ";
	std::cout << elem[input[0] - 49].getFirstName() << std::endl;
	std::cout << "Last name: ";
	std::cout << elem[input[0] - 49].getLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << elem[input[0] - 49].getNickName() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << elem[input[0] - 49].getDarkestSecret() << std::endl;
	std::cout << "Phone number: ";
	std::cout << elem[input[0] - 49].getPhoneNumber() << std::endl;
	return ;
}
