# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 09:47:59 by mfortuna          #+#    #+#              #
#    Updated: 2025/09/08 14:57:37 by mfortuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= AForm
CPP		= c++
CPPFLG	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp
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

