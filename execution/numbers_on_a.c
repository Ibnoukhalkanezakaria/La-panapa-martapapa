/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_on_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/21 11:25:35 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    create_node(t_stack **a, int number)
{
    t_stack *new_node;
    // t_stack *curr;
    t_stack *last_node;
    new_node = (t_stack*)malloc(sizeof(t_stack));
    if(!new_node)
        return;

    new_node->content = number;
    // new_node->next = NULL;
    // new_node->prev = NULL;
    // printf("new_node->content: %d\n", new_node->content);
    if(*a == NULL)
    {
        *a = new_node;
        new_node->next = NULL;
        new_node->prev = NULL;
    }
    else
    {
        last_node = find_last_node(*a);
        last_node->next = new_node;
        new_node->next = NULL;
        last_node->prev = new_node;
    }
}

void	numbers_on_a(t_stack*box, t_stack **a, int *p)
{
	int i;

    i = 0;
    while (i < box->size_arr_f)
    {
        create_node(a, p[i]);
        i++;
    }
}
