# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/16 12:10:49 by mfortuna          #+#    #+#              #
#    Updated: 2025/11/03 11:02:20 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= btc
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98 -g
SRC		= main.cpp BitcoinExchange.cpp
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