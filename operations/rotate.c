/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:20:17 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/03/02 17:51:29 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **node)
{
	t_stack	*last_node;

	if (!node || !(*node)->next)
		return ;
	last_node = find_last_node(*node);
	last_node->next = (*node);
	(*node) = (*node)->next;
	(*node)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack **a, int check)
{
	rotate(a);
	if (check == 0)
	{
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack **b, int check)
{
	rotate(b);
	if (check == 0)
	{
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack **a, t_stack **b, int check)
{
	rotate(a);
	rotate(b);
	if (check == 0)
	{
		write(1, "rr\n", 3);
	}
}
