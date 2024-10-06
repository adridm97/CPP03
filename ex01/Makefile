# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrian <adrian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 15:41:18 by adrian            #+#    #+#              #
#    Updated: 2024/10/04 17:25:25 by adrian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= scavtrap
CPP		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SOURCES	= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS	= ${SOURCES:.cpp=.o}

all: $(NAME)


$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re