# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/16 12:10:49 by mfortuna          #+#    #+#              #
#    Updated: 2025/12/09 12:12:35 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= RPN
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98 -g
SRC		= main.cpp RPN.cpp
OBJS	= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLG) -I . -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all