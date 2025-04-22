/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:15:22 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/04 17:30:14 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adress for str: \t" << &str << std::endl;
	std::cout << "adress for strPTR:\t" << stringPTR << std::endl;
	std::cout << "adress for strREF:\t" << &stringREF << std::endl;
	std::cout << "str value:\t\t" << str << std::endl;
	std::cout << "str value:\t\t" << *stringPTR << std::endl;
	std::cout << "str value:\t\t" << stringREF << std::endl;

	std::cout << "changing str" << std::endl;
	str = "BYE BRAIN";
	std::cout << "adress for str: \t" << &str << std::endl;
	std::cout << "adress for strPTR:\t" << stringPTR << std::endl;
	std::cout << "adress for strREF:\t" << &stringREF << std::endl;
	std::cout << "str value:\t\t" << str << std::endl;
	std::cout << "str value:\t\t" << *stringPTR << std::endl;
	std::cout << "str value:\t\t" << stringREF << std::endl;

	std::cout << "changing PTR" << std::endl;
	std::string newstr= "new pointer";
	stringPTR = &newstr;
	std::cout << "adress for str: \t" << &str << std::endl;
	std::cout << "adress for strPTR:\t" << stringPTR << std::endl;
	std::cout << "adress for strREF:\t" << &stringREF << std::endl;
	std::cout << "str value:\t\t" << str << std::endl;
	std::cout << "str value:\t\t" << *stringPTR << std::endl;
	std::cout << "str value:\t\t" << stringREF << std::endl;

	std::cout << "changing REF" << std::endl;
	stringREF = *stringPTR;
	std::cout << "adress for str: \t" << &str << std::endl;
	std::cout << "adress for strPTR:\t" << stringPTR << std::endl;
	std::cout << "adress for strREF:\t" << &stringREF << std::endl;
	std::cout << "str value:\t\t" << str << std::endl;
	std::cout << "str value:\t\t" << *stringPTR << std::endl;
	std::cout << "str value:\t\t" << stringREF << std::endl;
	return 0;
}