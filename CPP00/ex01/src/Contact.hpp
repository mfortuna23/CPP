/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:59:04 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/24 13:34:40 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cstring>

class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		int			phoneNumber;
		int			index;
	public:
		Contact() : firstName(""), lastName(""), nickName(""), darkestSecret(""),
			phoneNumber(0), index(0) {}
		void		setFirstName(std::string name) {firstName = name;};
		void		setLastName(std::string name) {lastName = name;};
		void		setNickName(std::string name) {nickName = name;};
		void		setDarkestSecret(std::string secret) {darkestSecret = secret;};
		void		setPhoneNumber(int number) {phoneNumber = number;};
		void		setIndex(int number) {index = number;};
		int			getIndex(void) {return index;};
		std::string	getFirstName(void) {return firstName;};
		std::string	getLastName(void) {return lastName;};
		std::string	getNickName(void) {return nickName;};
		std::string	getDarkestSecret(void) {return darkestSecret;};
		int			getPhoneNumber(void) {return phoneNumber;};
		bool		setContact(std::string input, int type);
		void		resetContact(void);
} ;
#endif