/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:59:10 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/26 15:04:19 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template<class T> int easyfind(T container, int value){
	for(int i = 0; container[i]; i++ )
		if(container[i] == value)
			return i;
	return -1;
}

#endif