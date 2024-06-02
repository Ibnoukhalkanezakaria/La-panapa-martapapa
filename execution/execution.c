/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/30 09:09:00 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	execution(t_stack *box, int *p, int size)
{
	t_stack	**a;
	t_stack	**b;

	(void)size;
	a = (t_stack **)malloc(sizeof(t_stack));
	b = (t_stack **)malloc(sizeof(t_stack));
	numbers_on_a(box, a, p);
	box->a = a;
	box->b = b;
	if (box->size_arr_f == 2)
		sa(box->a, 0);
	else if (box->size_arr_f == 3)
		three_nodes(box, box->a);
	else if (box->size_arr_f > 3 && box->size_arr_f <= 5)
		five_nodes(box, box->a, box->b);
	else if (box->size_arr_f > 5)
		big_cases(box, box->a, box->b);
}
