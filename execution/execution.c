/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/21 11:45:06 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	execution(t_stack *box, int *p, int size)
{
	int		is_sorte_val;
	t_stack **a = (t_stack**)malloc(sizeof(t_stack));
	t_stack *cur;

	*a = NULL;
	cur = NULL;
	is_sorte_val = is_sorted(p, size);
	if (!is_sorte_val)
	{
		numbers_on_a(box, a, p);
		box->a = a;
		if(length_stack(*box->a) == 2)
			sa(box->a, 0);
		if(length_stack(*box->a) == 3)
			three_nodes(box->a);
		// printf("length_stack(box->a): %d\n", length_stack(*box->a));

		// cur = *a;

		// while (cur != NULL)
		// {
		// 	printf("(*cur)->content: %d\n", cur->content);
		// 	cur = cur->next;
		// }
	}
}
