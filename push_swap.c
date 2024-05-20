/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 10:50:37 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_stack	*box;

	box = (t_stack *)malloc(sizeof(t_stack));
	if (!box)
		return (0);
	if (ac > 1)
	{
		numbers(box, ac, av);
		i = 0;
		while (i < box->size_arr_f)
		{
			printf("number: %d\n", box->all_numbers[i]);
			i++;
		}
	}
	free_box(box);
	return (0);
}
