/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_cases.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/23 14:27:57 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int    f(t_stack *box, int *p, t_stack *a)
{
    int i;

    i = 0;
    sort(p, box->size_arr_f);
    while (i < box->size_arr_f)
    {
        if(a->content == p[i])
            return i;
        i++;
    }
    return 0;
}

void    get_index_two(t_stack *box, t_stack *a, int *p)
{
    int i;

    i = 0;
    while (a != NULL)
    {
        a->index = f(box, p, a);
        a = a->next;
    }
}

int    find_position(t_stack *a, int number)
{
    int i = 0;
    while (a)
    {
        // if(a->content == number)
        //     return i;
        printf("%d --- %d\n", a->content, number);
        a = a->next;
        i++;
    }
    return 0;
}

void	big_cases(t_stack *box, t_stack **a, t_stack **b)
{
    (void)a;
    (void)b;
    (void)box;
}

// if(index < i)
//     pa + ra;

// if(index < i + n)
//     pa
