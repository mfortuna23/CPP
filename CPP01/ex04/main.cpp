/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:03:18 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/16 15:34:48 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>

//cant use string.replace

void	replaceStrInFile(std::string name, std::string s1, std::string s2){
	std::ifstream		file(name);
	std::fstream		nFile(name);
	std::stringstream	buffer;
	std::string			nContent;
	size_t 				i = 0;
	if (!file){
		std::cout << "Cant read: " << name << std::endl;
		exit(EXIT_FAILURE);
	}
	buffer << file.rdbuf();
	std::string content = buffer.str();
	while (i < content.length())
	{
		if (content.substr(i, s1.length()) == s1)
		{
			nContent += s2;
			i += s1.length();
		}
		else
			nContent += content[i++];
	}
	file.close();
	if (!nFile){
		std::cout << "Cant write in: " << name << std::endl;
		exit(EXIT_FAILURE);
	}
	nFile << nContent;
	nFile.close();
}

int main (void){
	std::string fileName;
	std::string s1;
	std::string s2;

	std::cout << "Enter file name: ";
	std::getline(std::cin, fileName);
	if (std::cin.eof() || fileName.empty())
		return 1;
	std::cout << "Enter first string: ";
	std::getline(std::cin, s1);
	if (std::cin.eof() || s1.empty())
		return 1;
	std::cout << "Enter second string: ";
	std::getline(std::cin, s2);
	if (std::cin.eof() || s2.empty())
		return 1;
	replaceStrInFile(fileName, s1, s2);
	return 0;
}