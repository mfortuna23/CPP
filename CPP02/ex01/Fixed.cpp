/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:06:36 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/29 17:44:45 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << blue << "Default constructor called" << reset << std::endl;
	fixedPoint = 0;
}
Fixed::Fixed(const int a){
	std::cout << blue << "Int constructor called" << reset << std::endl;
	fixedPoint = a;
}
Fixed::Fixed(const float b){
	std::cout << blue << "Float constructor called" << reset << std::endl;
	fixedPoint = roundf(b * (1 << fractionalBits));
}
Fixed::Fixed(Fixed& t){
	std::cout << cyan << "Copy constructor called" << reset << std::endl;
	fixedPoint = t.getRawBits();
}
Fixed& Fixed::operator= (const Fixed& fix){
	std::cout << cyan << "Copy assignment operator constructor called" << reset 
	<< std::endl;
	if (this != &fix)
		fixedPoint = fix.fixedPoint;
	return *this;
}
int	Fixed::getRawBits(){
	std::cout << magenta << "getRawBits member function called" << reset << std::endl;
	return fixedPoint;
}
void Fixed::setRawBits(int const raw){
	std::cout << green << "setRawBits member function called" << reset<< std::endl;
	fixedPoint = raw;
}
int	Fixed::toInt(void){
	return this->getRawBits();
}
float Fixed::toFloat(void) const{
	return static_cast<float>(fixedPoint) / (1 << fractionalBits);;
}
Fixed::~Fixed(){
	std::cout << yellow << "Destructor called" << reset << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Fixed &fix){
	out << fix.toFloat();
	return out;
}