/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 11:06:40 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index(t_stack *a, int small)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		if (a->content == small)
			return (i);
		a = a->next;
		i++;
	}
	return (i);
}

void	five_nodes(t_stack *box, t_stack **a, t_stack **b)
{
	int	size;
	int	index;
	int	small_number;

	size = length_stack(*a);
	small_number = the_small_number(*a);
	index = get_index(*a, small_number);
	while (size > 3)
	{
		if (index == 0)
			pb(b, a, 0);
		else if (size / 2 >= index)
			ra(a, 0);
		else if (size / 2 < index)
			rra(a, 0);
		size = length_stack(*a);
		small_number = the_small_number(*a);
		index = get_index(*a, small_number);
	}
	three_nodes(box, a);
	pa(a, b, 0);
	pa(a, b, 0);
}
