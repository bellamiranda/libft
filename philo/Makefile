NAME = philo
SRC = code_handles.c eat.c errors.c hard_code.c init_data.c main.c \
		no_racing.c parser.c pseudo_libft.c syncing.c utils.c
OBJ = code_handles.o eat.o errors.o hard_code.o init_data.o main.o \
		no_racing.o parser.o pseudo_libft.o syncing.o utils.o
CC = cc -g -pthread -Wall -Wextra -Werror #-fsanitize=thread

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	$(MAKE)	clean

$(SRC): 
	$(CC) -c $(SRC)

$(OBJ): $(SRC) 
	$(CC) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all