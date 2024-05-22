/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 10:41:55 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three_nodes(t_stack *box, t_stack **a)
{
	t_stack	*big_number;

	big_number = the_big_number(box, *a);
	if ((*a)->content == big_number->content)
	{
		ra(a, 0);
	}
	else if ((*a)->next->content == big_number->content)
	{
		rra(a, 0);
	}
	if ((*a)->content > (*a)->next->content)
		sa(a, 0);
}
