/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_cases.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/24 17:08:00 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	find_position(t_stack *a, int i, int k)
{
	int	j;

	j = 0;
	while (a)
	{
		if (a->index < i || a->index < i + k)
			break ;
		j++;
		a = a->next;
	}
	return (j);
}

int	f(t_stack *box, int *p, t_stack *a)
{
	int	i;

	i = 0;
	sort(p, box->size_arr_f);
	while (i < box->size_arr_f)
	{
		if (a->content == p[i])
			return (i);
		i++;
	}
	return (0);
}

void	get_index_two(t_stack *box, t_stack *a, int *p)
{
	while (a != NULL)
	{
		a->index = f(box, p, a);
		a = a->next;
	}
}

void	start_sorting(t_stack *box, t_stack **a, t_stack **b, int k)
{
	int	i;

	i = 0;
	get_index_two(box, *a, box->all_numbers);
	while (*a)
	{
		if ((*a)->index < i)
		{
			pb(b, a, 0);
			rb(b, 0);
			i++;
		}
		else if ((*a)->index < i + k)
		{
			pb(b, a, 0);
			i++;
		}
		else if ((find_position(*a, i, k)) < (length_stack(*a) / 2))
			ra(a, 0);
		else
			rra(a, 0);
	}
}

void	big_cases(t_stack *box, t_stack **a, t_stack **b)
{
	int	len;

	len = length_stack(*a);
	if (len <= 400)
		start_sorting(box, a, b, 15);
	else
		start_sorting(box, a, b, 30);
	push_to_a(box, a, b);
}
