# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecarval <jecarval@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 18:10:57 by jecarval          #+#    #+#              #
#    Updated: 2023/12/23 18:20:53 by jecarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
FILES = megaphone.cpp
OBJS = $(FILES:.cpp=.o)
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SILENT:
