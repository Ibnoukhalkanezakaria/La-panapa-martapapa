/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_small_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 11:06:17 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	the_small_number(t_stack *a)
{
	t_stack	*curr;
	int		tmp;

	curr = a;
	tmp = INT_MAX;
	while (curr != NULL)
	{
		if (curr->content < tmp)
			tmp = curr->content;
		curr = curr->next;
	}
	return (tmp);
}
