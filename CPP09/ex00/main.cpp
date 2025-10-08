/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:59:52 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/08 14:57:25 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 3)
		return 1;
	std::ifstream data(av[1]);
	std::ifstream wallet(av[2]);
	if (!data || !wallet)
		return 1;
		
	data.close();
	
	return 0;
}