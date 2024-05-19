/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 14:47:53 by zibnoukh         ###   ########.fr       */
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

void	get_first_arr(t_stack *box, int ac, char **av)
{
	char	*p;
	int		i;
	int		size;

	size = get_size(ac, av);
	p = (char *)malloc(sizeof(char) * size);
	if (!p)
		return ;
	i = 1;
	while (i < ac)
	{
		ft_strcat(p, av[i]);
		ft_strcat(p, " ");
		i++;
	}
	box->p_arr = p;
}

void	size_int(t_stack *box, int ac, char **av)
{
	char	**r;
	int		i;

	get_first_arr(box, ac, av);
	r = ft_split(box->p_arr, ' ');
	i = 0;
	while (r[i])
		i++;
	box->size_int = i;
	free(r);
}

void	minus_plus(char *s)
{
	int	i;
	int	size;

	size = ft_strlen(s) - 1;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[size] == '-' || s[size] == '+')
			error(1);
		i--;
	}
}

void	numbers(t_stack *box, int ac, char **av)
{
	char	**r;
	int		*p;
	int		i;

	size_int(box, ac, av);
	get_first_arr(box, ac, av);
	r = ft_split(box->p_arr, ' ');
	duplicate_number(r);
	p = (int *)malloc(sizeof(int) * box->size_int);
	i = 0;
	while (r[i])
	{
		minus_plus(r[i]);
		p[i] = ft_atoi(r[i]);
		i++;
	}
	box->size_arr_f = i;
	box->int_p = p;
	free_r(r);
}
