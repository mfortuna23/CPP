# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 15:14:04 by mfortuna          #+#    #+#              #
#    Updated: 2025/05/14 15:14:09 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp Fixed.cpp
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