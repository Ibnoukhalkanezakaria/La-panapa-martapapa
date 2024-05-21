/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/21 11:30:09 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three_nodes(t_stack **a)
{
	t_stack	*big_number;

	big_number = the_big_number(*a);

    printf("big_number: %d", big_number->content);
	// if (*a == big_number)
	// {
	// 	ra(a, 0);
	// }
	// else if ((*a)->next == big_number)
	// {
	// 	rra(a, 0);
	// }
	// if ((*a)->content > (*a)->next->content)
	// 	sa(a, 0);
}
