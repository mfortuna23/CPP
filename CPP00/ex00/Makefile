# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 11:04:58 by mfortuna          #+#    #+#              #
#    Updated: 2025/03/20 14:24:40 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megafone
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
SDIR	= src/
SRC		= $(addprefix $(SDIR), megafone.cpp)
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
