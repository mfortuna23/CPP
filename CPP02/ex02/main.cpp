/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:22:31 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/03 11:08:06 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	{	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << --a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	}

	Fixed c(12.8974f);
	Fixed d((int)12.8974);
	Fixed e(0);
	
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << c.toFloat() << std::endl;
	std::cout << d.toFloat() << std::endl;

	if (c <= d)
		std::cout << "true" << std::endl;

	std::cout << (1 << 8) << std::endl;
	std::cout << roundf(1.1 * (1 << 8)) << std::endl;
	std::cout << d * e << std::endl;
	return 0;
	}