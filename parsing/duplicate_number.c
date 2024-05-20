/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 10:48:12 by zibnoukh         ###   ########.fr       */
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

void	get_p(t_stack *box, int *p, int size)
{
	int	i;
	int	index;
	int	count;

	sort(p, size);
	i = 0;
	index = 0;
	count = 0;
	while (i < size)
	{
		if (p[index] == p[index + 1])
			count++;
		else
			index += 1;
		i++;
	}
	if (count > 0)
		error(box, 1);
}

void	duplicate_number(t_stack *box, char **s)
{
	int	i;
	int	size_val;
	int	*p;

	size_val = size(s);
	p = (int *)malloc(sizeof(int) * size_val);
	i = 0;
	while (s[i])
	{
		p[i] = ft_atoi(box, s[i]);
		i++;
	}
	box->p_dup = p;
	get_p(box, p, size_val);
}
