# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecarval <jecarval@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 12:55:59 by jecarval          #+#    #+#              #
#    Updated: 2023/12/24 17:39:05 by jecarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
FILES = PhoneBook.cpp Contact.cpp main.cpp
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