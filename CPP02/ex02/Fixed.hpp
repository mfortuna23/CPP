/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:06:03 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/07 18:55:13 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

#define blue "\033[34m"
#define red "\033[31m"
#define green "\033[32m"
#define yellow "\033[33m"
#define magenta "\033[35m"
#define cyan "\033[36m"
#define reset "\033[0m"

class Fixed{
	private :
		int 				fixedPoint;
		static const int	fractionalBits = 8;
	public :
		Fixed();
		Fixed(const int a);
		Fixed(const float b);
		Fixed(const Fixed& t);
		Fixed& operator= (const Fixed& fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		//comparison operators
		bool operator== (const Fixed& other) const;
		bool operator!= (const Fixed& other) const;
		bool operator> (const Fixed& other) const;
		bool operator>= (const Fixed& other) const;
		bool operator< (const Fixed& other) const;
		bool operator<= (const Fixed& other) const;
		// arithmetic operators
		const Fixed operator+ (const Fixed& other);
		const Fixed operator- (const Fixed& other);
		const Fixed operator* (const Fixed& other);
		const Fixed operator/ (const Fixed& other);
		// increment/decrement operators
		Fixed operator++ ();
		Fixed operator-- ();
		Fixed operator++ (int);
		Fixed operator-- (int);
		// min and max
		static Fixed& min(Fixed &a,  Fixed &b);
		//static int& min(const int &a, const int &b);
		static Fixed& max(Fixed &a,  Fixed &b);
		static Fixed& max(const Fixed &a,  const Fixed &b);
		~Fixed();
} ;

std::ostream &operator<<(std::ostream &out, const Fixed& fix);

#endif