/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 10:14:37 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_size(int ac, char **av)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	while (i < ac)
		count += ft_strlen(av[i++]) + 1;
	return (count);
}

char	*get_first_arr(int ac, char **av)
{
	char	*p;
	int		i;
	int		size;

	size = get_size(ac, av);
	p = malloc(size);
	i = 1;
	while (i < ac)
	{
		strcat(p, av[i]);
		strcat(p, " ");
		i++;
	}
	return (p);
}

int	size_int(int ac, char **av)
{
	char	*string;
	char	**r;
	int		i;

	string = get_first_arr(ac, av);
	r = ft_split(string, ' ');
	i = 0;
	while (r[i])
		i++;
	return (i);
}

void	minus_plus(char *s)
{
	int i;
	int size;


	size = ft_strlen(s) - 1;
	i = ft_strlen(s) - 1;

	while (i >= 0) 
	{
		if(s[size] == '-' || s[size] == '+')
			error(1);
		i--;
	}
}

int	*numbers(int ac, char **av)
{
	int		size_int_val;
	char	*string;
	char	**r;
	int		*p;
	int		i;

	size_int_val = size_int(ac, av);
	string = get_first_arr(ac, av);
	r = ft_split(string, ' ');
	p = (int *)malloc(sizeof(int) * size_int_val);
	i = 0;
	while (r[i])
	{
		minus_plus(r[i]);
		duplicate_number(r[i]);
		p[i] = ft_atoi(r[i]);
		i++;
	}
	return (p);
}
