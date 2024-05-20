/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_plus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 14:32:35 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	plus_plus(t_stack *box, char *s)
{
	int	i;
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	i = 0;
	(void)box;
	while (s[i])
	{
		if (s[i] == '+')
			count1++;
		if (s[i] == '-')
			count2++;
		i++;
	}
	if (count1 >= 2 || count2 >= 2)
		box->error = 1;
}
