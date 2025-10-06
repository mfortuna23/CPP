/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:59:52 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/06 15:15:40 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <ctime>

int main(int ac, char **av){
	if (ac != 2)
		return 1;
	std::ifstream file(av[1]);
	if (!file)
		return 1;
		
	file.close();
	return 0;
}