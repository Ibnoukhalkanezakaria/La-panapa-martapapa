/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/16 17:08:11 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    (void)av;
    int check;
    t_stack *box;

    check = 0;
    box = (t_stack*)malloc(sizeof(t_stack));
    if (!box)
        return 0;
    if(ac > 1)
    {
        checker(box, ac, av);
    }
    free(box);
}
