/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:54:25 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/16 16:46:44 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class harl{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public :
		void complain( std::string level);
} ;

#endif