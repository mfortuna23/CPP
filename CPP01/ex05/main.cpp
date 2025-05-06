/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:53:12 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/06 10:42:03 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main (int argc, char **argv){
	if (argc != 2){
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return 1;}
	harl mHarl;
	mHarl.complain(argv[1]);
	return 0;
}