/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_on_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/06/02 10:17:48 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_node(t_stack *box, t_stack **a, int number)
{
	t_stack	*new_node;
	t_stack	*last_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->content = number;
	if (*a == NULL)
	{
		*a = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*a);
		last_node->next = new_node;
	}
	box->new_node = new_node;
}

void	numbers_on_a(t_stack *box, t_stack **a, int *p)
{
	int	i;

	i = 0;
	while (i < box->size_arr_f)
	{
		create_node(box, a, p[i]);
		i++;
	}
}
