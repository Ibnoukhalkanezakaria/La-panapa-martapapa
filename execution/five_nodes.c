/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/21 16:48:22 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int    index_vl(t_stack *a, t_stack *small_number)
{
    int i;

    i = 0;
    while (a != NULL)
    {
        if(a->content == small_number->content)
            return i;
        a = a->next;
        i++;
    }
    return i;
}

void	five_nodes(t_stack **a, t_stack **b)
{
	t_stack	*small_number;
    int size;
    int index;

    size = length_stack(*a);
	small_number = the_small_number(*a);
    index = index_vl(*a, small_number);

    while (size > 3)
    {
		if (index == 0)
			pb(b,a, 0);
		else if (size / 2 >= index)
			ra(a, 0);
		else if (size / 2 < index)
			rra(a, 0);
	    small_number = the_small_number(*a);
        index = index_vl(*a, small_number);
        size = length_stack(*a);
    }
    three_nodes(a);
    pa(a,b, 0);
    pa(a,b, 0);
}
