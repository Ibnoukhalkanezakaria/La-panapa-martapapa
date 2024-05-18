/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/18 20:14:55 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	*get_arr;
	int	check;
			int i;

	check = 0;
	if (ac > 1)
	{
		get_arr = numbers(ac, av);
		check = checker(ac, av);
		if (check)
		{
			i = 0;
			while (i < 10)
			{
				printf("number: %d\n", get_arr[i]);
				i++;
			}
		}
		else
		{
			printf("%s\n", "Error");
			exit(1);
		}
	}
	return (0);
}
