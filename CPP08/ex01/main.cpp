/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:25:13 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/30 17:09:03 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void){
	try {	
		Span a(10);
		unsigned int num[] = {1, 2, 3, 4};
		a.addNumber(4, num);
		a.addNumber(98237402);
		//Span b(1);
		//b.addNumber(4, num);
		//std::cout << b.shortestSpan() << std::endl;
		//std::cout << b.longestSpan() << std::endl;		
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	} catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}