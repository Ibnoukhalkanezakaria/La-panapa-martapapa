/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_id_by_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 13:24:34 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    sort_a(t_stack *a)
{
    int tmp;
    int sorted;
    t_stack *cur;

    while (1)
    {
        sorted = 0;
        cur = a;   
        while (cur->next != NULL)
        {
            if(cur->content > cur->next->content)
            {
                tmp = cur->next->content;
                cur->next->content = cur->content;
                cur->content = tmp;
                sorted = 1;
            }
            cur = cur->next;
        }

        if(!sorted)
            break;
    }
}

void    get_id(t_stack *a)
{
    int i;

    i = 0;
    while (a != NULL)
    {
        a->id = i;
        a = a->next;
        i++;
    }
}

void    get_id_by_sort(t_stack *a)
{
    sort_a(a);
    get_id(a);
}
