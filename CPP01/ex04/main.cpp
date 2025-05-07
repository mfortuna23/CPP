/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:03:18 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/07 15:39:25 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>

//cant use string.replace

int	replaceStrInFile(std::string name, std::string s1, std::string s2){
	std::ifstream		file(name.c_str());
	std::stringstream	buffer;
	std::string			nContent;
	size_t 				i = 0;
	if (!file){
		std::cout << "Cant read: " << name << std::endl;
		return(1);
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
	i = name.length();
	name.append(".replace");
	std::ofstream		nFile(name.c_str());
	if (!nFile){
		std::cout << "Cant write in: " << name << std::endl;
		return (1);
	}
	nFile << nContent;
	nFile.close();
	return 0;
}

int main (int argc, char **argv){
	std::string fileName;
	std::string s1;
	std::string s2;

	if (argc != 4){
		std::cout << "Error: invalid number of arguments. plz try <filename> <s1> <s2>"
		<< std::endl;
		return 1;
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	return (replaceStrInFile(fileName, s1, s2));
}