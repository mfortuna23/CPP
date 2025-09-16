/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:21:47 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/16 15:41:49 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T> void iter(T arr[], size_t size, void(*f)(T)){
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}