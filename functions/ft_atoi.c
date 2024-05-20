/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 10:11:58 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	int_m(t_stack *box, long n)
{
	if (n > INT_MAX || n < INT_MIN)
		error(box, 1);
}

void	bad_char(t_stack *box, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != '-' && s[i] != '+')
		{
			if (!(s[i] >= '0' && s[i] <= '9'))
				error(box, 1);
		}
		i++;
	}
}

long	ft_atoi(t_stack *box, char *s)
{
	long long	number;
	long long	one;
	long long	result;

	result = 0;
	one = 1;
	number = 0;
	bad_char(box, s);
	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			one *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		number = number * 10 + (*s - '0');
		s++;
	}
	int_m(box, number * one);
	return (number * one);
}
