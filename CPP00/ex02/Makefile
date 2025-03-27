# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 10:04:47 by mfortuna          #+#    #+#              #
#    Updated: 2025/03/27 10:06:45 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= acccount
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
OBJS	=  tests.o Account.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLG) -g -I . -c $< -o $@

clean:
	rm -fr $(ODIR)

fclean: clean
	rm -f $(NAME)

re: fclean all