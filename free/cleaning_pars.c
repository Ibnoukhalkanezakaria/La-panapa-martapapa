/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaning_pars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 14:50:12 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_r(char **r)
{
	int	i;

	i = 0;
	while (r[i])
	{
		free(r[i]);
		i++;
	}
	free(r);
}

void	free_box(t_stack *box)
{
	free(box->p_arr);
	free(box->int_p);
	free(box);
}

void	cleaning_pars(t_stack *box, int *p)
{
	free(p);
	free(box);
}
