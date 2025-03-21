# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 11:35:33 by mfortuna          #+#    #+#              #
#    Updated: 2025/03/21 11:34:46 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
SDIR	= src/
SRC		= $(addprefix $(SDIR), main.cpp PhoneBook.cpp)
ODIR	= obj/
OBJS	= $(patsubst $(SDIR)%.cpp,$(ODIR)%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLG) $(OBJS) -o $(NAME)

$(ODIR)%.o: $(SDIR)%.cpp | $(ODIR)
	$(CPP) $(CPPFLG) -g -I . -c $< -o $@

$(ODIR):
	mkdir -p $(ODIR)

clean:
	rm -fr $(ODIR)

fclean: clean
	rm -f $(NAME)

re: fclean all