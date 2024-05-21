/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 21:08:04 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	execution(t_stack*box,  int *p, int size)
{
	int	is_sorte_val;
    t_stack *a;

    a = NULL;
	is_sorte_val = is_sorted(p, size);
	if (!is_sorte_val)
    {
		// printf("Start execution\n");
        // if(length_stack(a))
        // printf("%d\n", length_stack(a));
        int i = 0;
        while (i < box->size_arr_f)
        {
            printf("number: %d\n", box->all_numbers[i]);
            i++;
        }
        
    }
}
