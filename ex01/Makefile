# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 18:16:15 by mtaib             #+#    #+#              #
#    Updated: 2023/08/08 14:46:19 by mtaib            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp 
OSRC = $(SRC:.cpp=.o)

NAME = ScavTrap
CFLAGS = -Wextra -Werror -Wall -std=c++98

%.o:%.cpp ClapTrap.hpp ScavTrap.hpp
	c++ -c $(CFLAGS) $<

all: $(NAME)

$(NAME) :$(OSRC)
		c++ $(CFLAGS) $^ -o $(NAME)

clean :
	@rm -f *.o
fclean :
	@rm -f *.o $(NAME) 
re : fclean all

.PHONY : all clean fclean re
