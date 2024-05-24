/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/24 17:18:19 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	find_i(t_stack *a, int number)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->content == number)
			return (i);
		i++;
		a = a->next;
	}
	return (i);
}

int	big_number(t_stack *b)
{
	t_stack	*curr;
	int		tmp;

	curr = b;
	tmp = INT_MIN;
	while (curr != NULL)
	{
		if (curr->content > tmp)
			tmp = curr->content;
		curr = curr->next;
	}
	return (tmp);
}

void	push_to_a(t_stack *box, t_stack **a, t_stack **b)
{
	int	big;
	int	len;
	int	index;

	(void)box;
	len = length_stack(*b);
	big = big_number(*b);
	index = find_i(*b, big);
	while (len)
	{
		if ((*b)->content == big)
		{
			pa(a, b, 0);
			len--;
			big = big_number(*b);
			index = find_i(*b, big);
		}
		else if (index <= len / 2)
			rb(b, 0);
		else
			rrb(b, 0);
	}
}
