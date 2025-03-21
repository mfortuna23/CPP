/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:59:04 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/21 17:31:40 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cstring>

class Contact{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string DarkestSecret;
		int			PhoneNumber;
		int			Index;
	public:
		Contact() : FirstName(""), LastName(""), NickName(""), DarkestSecret(""),
			PhoneNumber(0), Index(0) {}
		void		SetFirstName(std::string name) {FirstName = name;};
		void		SetLastName(std::string name) {LastName = name;};
		void		SetNickName(std::string name) {NickName = name;};
		void		SetDarkestSecret(std::string secret) {DarkestSecret = secret;};
		void		SetPhoneNumber(int number) {PhoneNumber = number;};
		void		SetIndex(int number) {Index = number;};
		int			GetIndex(void) {return Index;};
		std::string	GetFirstName(void) {return FirstName;};
		std::string	GetLastName(void) {return LastName;};;
		std::string	GetNicktName(void) {return NickName;};;
		std::string	GetDarkestSecret(void) {return DarkestSecret;};;
} ;
#endif