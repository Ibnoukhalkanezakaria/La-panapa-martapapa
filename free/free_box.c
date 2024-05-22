/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/21 10:33:14 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_r(char **r)
{
	int	i;

	i = 0;
	while (r[i])
	{
		free(r[i]);
		i++;
	}
	free(r);
}

void	free_a(t_stack **a)
{
	t_stack	*tmp;

	while (*a != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
		free(tmp);
	}
	free(a);
}

void	free_box(t_stack *box)
{
	free(box->all_numbers);
	free(box->join_all_numbers);
	free(box->p_dup);
	if (box->r)
		free_r(box->r);
	free(box);
	if (box->a)
		free_a(box->a);
}

void	free_errors(t_stack *box)
{
	(void)box;
}
