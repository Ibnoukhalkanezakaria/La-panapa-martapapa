#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    int size_1;
    int size_2;
    int *first_path;
    int *second_path;
} t_stack;

size_t ft_strlen(char *s);
long ft_atoi(char *s);
void    first_pars(t_stack *box, int ac, char** av);
void    checker(t_stack *box, int ac, char** av);
char	**ft_split(char const *s, char c);

#endif