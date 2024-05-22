/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 10:29:10 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*box;

	(void)av;
	box = (t_stack *)malloc(sizeof(t_stack));
	if (!box)
		return (0);
	if (ac > 1)
	{
		numbers(box, ac, av);
		if (!box->error)
			execution(box, box->all_numbers, box->size_arr_f);
		else
			error(1);
	}
	free_box(box);
	return (0);
}
