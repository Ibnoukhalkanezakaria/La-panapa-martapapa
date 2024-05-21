/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:20:12 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/21 11:54:11 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*ptr;
	t_stack	*last;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	ptr = *stack;
	while (ptr->next->next)
		ptr = ptr->next;
	last = find_last_node(*stack);
	ptr->next = NULL;
	last->next = *stack;
	*stack = last;
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
