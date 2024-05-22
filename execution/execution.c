/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 10:03:59 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	execution(t_stack *box, int *p, int size)
{
	int		is_sorte_val;
	t_stack	**a;
	t_stack	**b;
	t_stack	*cur;

	a = (t_stack **)malloc(sizeof(t_stack));
	b = (t_stack **)malloc(sizeof(t_stack));
	*b = NULL;
	*a = NULL;
	cur = NULL;
	is_sorte_val = is_sorted(p, size);
	if (!is_sorte_val)
	{
		numbers_on_a(box, a, p);
		box->a = a;
		box->b = b;
		if (length_stack(*box->a) == 2)
			sa(box->a, 0);
		if (length_stack(*box->a) == 3)
			three_nodes(box->a);
		if (box->size_arr_f == 5)
			five_nodes(box->a, box->b);
	}
}
