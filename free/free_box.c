/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 11:07:21 by zibnoukh         ###   ########.fr       */
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

void	free_struct(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	free(lst);
}

void	free_box(t_stack *box)
{
	free(box->all_numbers);
	free(box->join_all_numbers);
	free(box->p_dup);
	if (box->r)
		free_r(box->r);
	free(box);
	if (box->a)
		free_struct(box->a);
	if (box->b)
		free_struct(box->b);
	free(box->big_number);
}
