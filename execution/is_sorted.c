/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/29 16:21:44 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	is_sorted(t_stack *box, int *p, int size)
{
	int	i;
	int	index;

	index = 0;
	i = 0;
	while (i < size)
	{
		if (p[index] < p[index + 1])
			index++;
		i++;
	}
	if ((i - 1) == index)
		box->sorted = 1;
	else
		box->sorted = 0;
}
