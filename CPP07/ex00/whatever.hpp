/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:11:46 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/17 11:23:44 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template <class T> void swap(T &a, T &b){
	T c = a;
	a = b;
	b = c;
}

template <class T> T min(T a, T b){
	if (a > b)
		return b;
	return a;
}

template <class T> T max(T a, T b){
	if (a < b)
		return b;
	return a;
}

#endif