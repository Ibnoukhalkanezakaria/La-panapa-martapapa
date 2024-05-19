CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = push_swap.c functions/ft_atoi.c functions/ft_strlen.c \
	  functions/ft_strcat.c functions/ft_split.c \
	  parsing/numbers.c parsing/duplicate_number.c parsing/sort.c \
	  error/error.c free/cleaning_pars.c \

OBJ = ${SRC:.c=.o}

PUSH_SWAP = push_swap

${PUSH_SWAP}: ${OBJ}
	${CC} ${CFLAGS} -o $@ $^

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean:
	${RM} ${OBJ} ${PUSH_SWAP}

re: fclean ${PUSH_SWAP}