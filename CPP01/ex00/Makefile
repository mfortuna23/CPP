# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 15:36:11 by mfortuna          #+#    #+#              #
#    Updated: 2025/04/03 11:42:47 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS	= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLG) -g -I . -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all