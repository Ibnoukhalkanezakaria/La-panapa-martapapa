CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = push_swap.c functions/ft_atoi.c functions/ft_strlen.c \
      parsing/checker.c functions/ft_split.c \

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