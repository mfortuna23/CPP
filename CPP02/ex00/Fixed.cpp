/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:06:36 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/03 11:55:08 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << blue << "Default constructor called" << reset << std::endl;
	fixedPoint = 0;
}
Fixed::Fixed(Fixed& t){
	std::cout << cyan << "Copy constructor called" << reset << std::endl;
	*this = t;
}
Fixed& Fixed::operator= (const Fixed& fix){
	std::cout << cyan << "Copy assignment operator called" << reset 
	<< std::endl;
	fixedPoint = fix.getRawBits();
	return *this;
}
int	Fixed::getRawBits(void) const{
	std::cout << magenta << "getRawBits member function called" << reset << std::endl;
	return fixedPoint;
}
void Fixed::setRawBits(int const raw){
	std::cout << green << "setRawBits member function called" << reset<< std::endl;
	fixedPoint = raw;
}
Fixed::~Fixed(){
	std::cout << yellow << "Destructor called" << reset << std::endl;
}