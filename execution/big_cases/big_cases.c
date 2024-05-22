/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_cases.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/22 18:29:20 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	big_cases(t_stack *box, t_stack **a, t_stack **b)
{
    (void)b;
    (void)box;
    // (void)a;
    t_stack *curr;

    get_id_by_sort(*a);
    curr = *a;
    while (curr != NULL)
    {
        printf("%d\n", curr->content);
        curr = curr->next;
    }

    printf("\n**********************AF*************************\n");

    int i = 0;
    while (i < box->size_arr_f)
    {
        // printf("%d\n", box->all_numbers[i]);
        // if(a->id )
        if(e)
        i++;
    }
    
    
    
}
