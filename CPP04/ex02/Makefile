# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 15:14:04 by mfortuna          #+#    #+#              #
#    Updated: 2025/06/13 11:05:58 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= aanimal
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
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