/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:04:33 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/26 15:08:53 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main (){
	std::vector<int> vec;
	vec.push_back(-1);
	vec.push_back(143);
	vec.push_back(21);
	vec.push_back(13);
	vec.push_back(541);
	vec.push_back(12);
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(5);
	vec.push_back(2394);
	vec.push_back(1);
	if (::easyfind(vec, 3) > -1)
		std::cout << "found!"<< std::endl;
	std::cout << "not found"<< std::endl;
}