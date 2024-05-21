/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:20:24 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 15:32:27 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **head)
{
	int	tmp;

	if (!head || !(*head)->next)
		return ;
	if (*head == NULL)
		return ;
	tmp = (*head)->content;
	(*head)->content = (*head)->next->content;
	(*head)->next->content = tmp;
}

void	sa(t_stack **a, int check)
{
	swap(a);
	if (check == 0)
	{
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **b, int check)
{
	swap(b);
	if (check == 0)
	{
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack **a, t_stack **b, int check)
{
	swap(a);
	swap(b);
	if (check == 0)
	{
		write(1, "ss\n", 3);
	}
}
