CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = push_swap.c functions/ft_atoi.c functions/ft_strlen.c \
	  functions/ft_strcat.c functions/ft_split.c \
	  parsing/numbers.c parsing/duplicate_number.c parsing/plus_plus.c \
	  parsing/sort.c error/error.c free/free_box.c \
	  execution/execution.c execution/is_sorted.c \
	  execution/length_stack.c execution/numbers_on_a.c \
	  execution/find_last_node.c execution/five_nodes.c operations/push.c \
	  operations/swap.c execution/three_nodes.c \
	  execution/the_small_number.c execution/the_big_number.c \
	  operations/rotate.c operations/reverse_rotate.c \
	  execution/big_cases/big_cases.c execution/big_cases/get_id_by_sort.c \

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