/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 10:08:13 by zibnoukh         ###   ########.fr       */
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

void	five_nodes(t_stack **a, t_stack **b)
{
	t_stack	*small_number;
	int		size;
	int		index;

	size = length_stack(*a);
	small_number = the_small_number(*a);
	index = get_index(*a, small_number->content);
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
		index = get_index(*a, small_number->content);
	}
	three_nodes(a);
	pa(a, b, 0);
	pa(a, b, 0);
}
