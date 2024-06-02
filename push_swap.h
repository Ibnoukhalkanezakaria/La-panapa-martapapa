/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/30 11:51:13 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	char			*join_all_numbers;
	char			**r;
	int				*all_numbers;
	int				*p_dup;
	int				get_size;
	int				size_arr_f;
	int				error;
	int				sorted;
	int				index;
	int				biggy;
	int				the_size;
	struct s_stack	*big_node;
	struct s_stack	**a;
	struct s_stack	**b;
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*new_node;
	struct s_stack	*last_node;
	struct s_stack	*big_number;
	struct s_stack	*small_number;
	struct s_stack	*curr;
	int				content;
}					t_stack;

size_t				ft_strlen(char *s);
long				ft_atoi(t_stack *box, char *s);
char				**ft_split(char const *s, char c);
void				numbers(t_stack *box, int ac, char **av);
char				*ft_strcat(char *dest, char *src);
void				duplicate_number(t_stack *box, char **s);
void				plus_plus(t_stack *box, char *s);
void				check_one(t_stack *box, char *r);
void				sort(int *p, int size);
void				error(int val);
void				free_r(char **r);
void				free_box(t_stack *box);
void				execution(t_stack *box, int *p, int size);
void				is_sorted(t_stack *box, int *p, int size);
int					length_stack(t_stack *lst);
void				inside_number(t_stack *box, char *r);
void				numbers_on_a(t_stack *box, t_stack **a, int *p);
t_stack				*find_last_node(t_stack *a);
void				sa(t_stack **a, int check);
void				sb(t_stack **b, int check);
void				ss(t_stack **a, t_stack **b, int check);
void				ra(t_stack **a, int check);
void				rb(t_stack **b, int check);
void				rr(t_stack **a, t_stack **b, int check);
void				rra(t_stack **a, int check);
void				rrb(t_stack **b, int check);
void				rrr(t_stack **a, t_stack **b, int check);
void				three_nodes(t_stack *box, t_stack **a);
void				five_nodes(t_stack *box, t_stack **a, t_stack **b);
t_stack				*the_big_number(t_stack *box, t_stack *a);
int					the_small_number(t_stack *a);
void				pa(t_stack **a, t_stack **b, int check);
void				pb(t_stack **b, t_stack **a, int check);
void				big_cases(t_stack *box, t_stack **a, t_stack **b);
void				push_to_a(t_stack *box, t_stack **a, t_stack **b);
void				push_to_a(t_stack *box, t_stack **a, t_stack **b);

#endif