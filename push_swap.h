/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 14:27:25 by zibnoukh         ###   ########.fr       */
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
	char	*join_all_numbers;
	char	**r;
	int		*all_numbers;
	int		*p_dup;
	int		get_size;
	int		size_arr_f;
	int		error;
}			t_stack;

size_t		ft_strlen(char *s);
long		ft_atoi(t_stack *box, char *s);
char		**ft_split(char const *s, char c);
void		numbers(t_stack *box, int ac, char **av);
char		*ft_strcat(char *dest, char *src);
void		duplicate_number(t_stack *box, char **s);
void		plus_plus(t_stack *box, char *s);
void		sort(int *p, int size);
void		error(int val);
void		free_r(char **r);
void		free_box(t_stack *box);
void		free_errors(t_stack *box);

#endif