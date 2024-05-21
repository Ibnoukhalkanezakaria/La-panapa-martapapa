/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:20:12 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/03/02 17:51:26 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*lastnode;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return ;
	}
	lastnode = find_last_node(*stack);
	lastnode->prev->next = NULL;
	lastnode->next = (*stack);
	lastnode->prev = NULL;
	(*stack) = lastnode;
	lastnode->next->prev = lastnode;
}

void	rra(t_stack **a, int check)
{
	reverse_rotate(a);
	if (check == 0)
	{
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack **b, int check)
{
	reverse_rotate(b);
	if (check == 0)
	{
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack **a, t_stack **b, int check)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (check == 0)
	{
		write(1, "rrr\n", 4);
	}
}
