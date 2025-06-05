/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:06:03 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/05 11:52:02 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
		Fixed(const Fixed& t);
		Fixed& operator= (const Fixed& fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();
} ;

#endif