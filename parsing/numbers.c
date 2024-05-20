/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 10:49:34 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_size(t_stack *box, int ac, char **av)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	while (i < ac)
		count += ft_strlen(av[i++]) + 1;
	box->get_size = count;
}

void	join_all_numbers_on_s(t_stack *box, int ac, char **av)
{
	int		i;
	char	*p;

	get_size(box, ac, av);
	p = (char *)malloc(sizeof(char) * (box->get_size + 1));
	i = 1;
	while (i < ac)
	{
		if (ft_strlen(av[i]) == 0)
			error(box, 1);
		ft_strcat(p, av[i]);
		ft_strcat(p, " ");
		i++;
	}
	box->join_all_numbers = p;
}

void	minus_plus(t_stack *box, char *s)
{
	int	i;
	int	size;

	size = ft_strlen(s) - 1;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[size] == '-' || s[size] == '+')
			error(box, 1);
		i--;
	}
}

void	numbers(t_stack *box, int ac, char **av)
{
	char	**r;
	int		*p;
	int		i;

	join_all_numbers_on_s(box, ac, av);
	p = (int *)malloc(sizeof(int) * box->get_size);
	r = ft_split(box->join_all_numbers, ' ');
	duplicate_number(box, r);
	i = 0;
	while (r[i])
	{
		minus_plus(box, r[i]);
		p[i] = ft_atoi(box, r[i]);
		i++;
	}
	box->all_numbers = p;
	box->size_arr_f = i;
	box->r = r;
}
