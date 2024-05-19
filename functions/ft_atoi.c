/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 10:00:35 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	int_m(long n)
{
	if(n > INT_MAX || n < INT_MIN)
		error(1);
}

void	bad_char(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if(s[i] != '-' && s[i] != '+')
		{
			if(!(s[i] >= '0' && s[i] <= '9'))
				error(1);
		}
		i++;
	}
}

long	ft_atoi(char *s)
{
	long long	number;
	long long	one;
	long long 	result;

	result = 0;
	one = 1;
	number = 0;
	bad_char(s);
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
	int_m(number * one);
	return (number * one);
}
