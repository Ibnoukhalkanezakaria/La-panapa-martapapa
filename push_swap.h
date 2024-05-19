/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 14:45:58 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list
{
	int		size_arr_f;
	int		size_int;
	char	*p_arr;
	int		*int_p;
	char	**av;
}			t_stack;

size_t		ft_strlen(char *s);
long		ft_atoi(char *s);
char		**ft_split(char const *s, char c);
void		numbers(t_stack *box, int ac, char **av);
char		*ft_strcat(char *dest, char *src);
void		duplicate_number(char **s);
void		sort(int *p, int size);
void		error(int val);
void		cleaning_pars(t_stack *box, int *p);
void		free_r(char **r);
void		free_box(t_stack *box);

#endif