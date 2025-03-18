/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megafone.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:05:17 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/18 13:32:12 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
		
	for (int i = 1; i < argc; i++){
		for(int j = 0; j < strlen(argv[i]); j++)
			putchar(toupper(argv[i][j]));
	}
	std::cout << "\n";
	return 0;
}
