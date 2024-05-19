/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 12:48:07 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	size(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	get_p(int *p, int size)
{
	int	i;
	int	index;

	sort(p, size);
	i = 0;
	index = 0;
	while (i < size)
	{
		if (p[index] == p[index + 1])
			error(1);
		else
			index += 1;
		i++;
	}
	return (0);
}

void	duplicate_number(char **s)
{
	int	i;
	int	size_val;
	int	*p;

	size_val = size(s);
	p = (int *)malloc(sizeof(int) * size_val);
	if (!p)
		return ;
	i = 0;
	while (s[i])
	{
		p[i] = ft_atoi(s[i]);
		i++;
	}
	get_p(p, size_val);
	free(p);
}
