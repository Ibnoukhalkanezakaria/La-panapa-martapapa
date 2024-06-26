/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_big_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 10:42:29 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*the_big_number(t_stack *box, t_stack *a)
{
	t_stack	*curr;
	t_stack	*node;
	int		tmp;

	node = (t_stack *)malloc(sizeof(t_stack));
	curr = a;
	tmp = INT_MIN;
	while (curr != NULL)
	{
		if (curr->content > tmp)
			tmp = curr->content;
		node->content = tmp;
		curr = curr->next;
	}
	box->big_number = node;
	return (node);
}
