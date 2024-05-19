/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 09:28:30 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_error(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
        if(s[i] != ' ' && s[i] != '-' && s[i] != '+')
		{
			// if(!(s[i] >= '0' && s[i] <= '9'))
			// 	error(1);
		}
		i++;
	}
	return (1);
}

void	checker(int ac, char **av)
{
	int	i;
    int check;

	i = 1;
	while (i < ac)
	{
        check = find_error(av[i]);
		// if (check)
			// return (1);
		// else
			// printf("Error\n");
		i++;
	}
	// return (0);
}
