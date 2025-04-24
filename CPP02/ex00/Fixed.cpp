/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:06:36 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/23 16:52:45 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}
Fixed::Fixed(Fixed& t){
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint = t.getRawBits();
}
Fixed& Fixed::operator= (const Fixed& fix){
	std::cout << "Copy assignment operator constructor called" << std::endl;
	fixedPoint = fix.fixedPoint;
	return *this;
}
int	Fixed::getRawBits(){
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint;
}
void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	fixedPoint = raw;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}