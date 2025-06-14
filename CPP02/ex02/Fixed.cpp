/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:06:36 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/03 11:05:10 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << blue << "Default constructor called" << reset << std::endl;
	fixedPoint = 0;
}
Fixed::Fixed(const int a){
	std::cout << cyan << "Int constructor called" << reset << std::endl;
	fixedPoint = a << fractionalBits;
}
Fixed::Fixed(const float b){
	std::cout << cyan << "Float constructor called" << reset << std::endl;
	fixedPoint = roundf(b * (1 << fractionalBits));
}
Fixed::Fixed(const Fixed& t){
	std::cout << cyan << "Copy constructor called" << reset << std::endl;
	*this = t;
}
Fixed& Fixed::operator= (const Fixed& fix){
	std::cout << cyan << "Copy assignment operator called" << reset 
	<< std::endl;
	if (this != &fix)
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
int	Fixed::toInt(void) const{
	return fixedPoint >> fractionalBits;
}
float Fixed::toFloat(void) const{
	return static_cast<float>(fixedPoint) / (1 << fractionalBits);;
}

bool Fixed::operator== (const Fixed& other) const{
	if (fixedPoint == other.getRawBits())
		return true;
	return false;
}
bool Fixed::operator!= (const Fixed& other) const{
	if (fixedPoint != other.getRawBits())
		return true;
	return false;
}
bool Fixed::operator> (const Fixed& other) const{
	if (fixedPoint > other.getRawBits())
		return true;
	return false;
}
bool Fixed::operator>= (const Fixed& other) const{
	if (fixedPoint >= other.getRawBits())
		return true;
	return false;
}
bool Fixed::operator< (const Fixed& other) const{
	if (fixedPoint < other.getRawBits())
		return true;
	return false;
}
bool Fixed::operator<= (const Fixed& other) const{
	if (fixedPoint <= other.getRawBits())
		return true;
	return false;
}

const Fixed Fixed::operator+ (const Fixed& other){
	Fixed	nObj(this->toFloat() + other.toFloat());
	return nObj;
}
const Fixed Fixed::operator- (const Fixed& other){
	Fixed	nObj(this->toFloat() - other.toFloat());
	return nObj;	
}
const Fixed Fixed::operator* (const Fixed& other){
	Fixed	nObj(this->toFloat() * other.toFloat());
	return nObj;
}
const Fixed Fixed::operator/ (const Fixed& other){
	Fixed nObj;
	if (this->toFloat() == 0 || other.toFloat() == 0)
		nObj = Fixed(0);
	else
		nObj = Fixed(this->toFloat() / other.toFloat());
	return nObj;
}
Fixed Fixed::operator++ (){
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}
Fixed Fixed::operator-- (){
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}
Fixed Fixed::operator++ (int){
	Fixed tmp(4);
	tmp.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}
Fixed Fixed::operator-- (int){
	Fixed tmp(4);
	tmp.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}

Fixed& Fixed::min(Fixed &a,  Fixed &b){
	if (a.fixedPoint > b.fixedPoint)
		return b;
	return a;
}
const Fixed& Fixed::min(const Fixed &a,  const Fixed &b){
	if (a.fixedPoint < b.fixedPoint)
		return a;
	return b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b){
	if (a.fixedPoint < b.fixedPoint)
		return b;
	return a;
}
const Fixed& Fixed::max(const Fixed &a,  const Fixed &b){
	if (a.fixedPoint < b.fixedPoint)
		return b;
	return a;
}

Fixed::~Fixed(){
	std::cout << yellow << "Destructor called" << reset << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Fixed &fix){
	out << fix.toFloat();
	return out;
}