/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_big_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/21 11:30:23 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack* the_big_number(t_stack *a)
{
    t_stack *curr;
    t_stack *node;
    int tmp;

    node = (t_stack*)malloc(sizeof(t_stack));
    curr = a;
    tmp = INT_MIN;
    while (curr != NULL)
    {
        if(curr->content > tmp)
        {
            tmp = curr->content;
            printf("big:%d\n", tmp);
        }
        node->content = tmp;
        curr = curr->next;
    }
    // box->big_node = node;
    return node;
}
