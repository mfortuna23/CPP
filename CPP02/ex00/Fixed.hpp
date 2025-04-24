/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:06:03 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/23 16:30:31 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	private :
		int 				fixedPoint;
		static const int	fractionalBits = 8;
	public :
		Fixed();
		Fixed(Fixed& t);
		Fixed& operator= (const Fixed& fix);
		int		getRawBits();
		void	setRawBits(int const raw);
		~Fixed();
} ;

#endif