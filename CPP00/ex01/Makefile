# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 11:35:33 by mfortuna          #+#    #+#              #
#    Updated: 2025/03/19 14:35:39 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
FILES	= phonebook.cpp



all : $(NAME)

$(NAME) : $(FILES)
	$(CPP) $(CPPFLG) $(FILES) -o $(NAME)

clean :
	rm $(NAME)

re : clean $(NAME)