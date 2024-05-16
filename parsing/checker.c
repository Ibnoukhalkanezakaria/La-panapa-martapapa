/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/16 18:11:11 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_string(char *string)
{
    int i;

    i = 0;
    while (string[i])
    {
        if(string[i] == ' ')
            return 0;
        i++;
    }
    return 1;
}

void size(t_stack *box, int ac, char** av)
{
    int i;
    box->size_1 = 0;
    box->size_2 = 0;
    i = 1;
    while (i < ac)
    {
        if(check_string(av[i]))
            box->size_1++;
        else
            box->size_2++;
        i++;
    }
}

void    first_pars(t_stack *box, int ac, char** av)
{
    int i;
    size(box, ac, av);

    box->first_path = (int *)malloc(sizeof(int) * box->size_1);
    if(!box->first_path)
        return;

    i = 1;
    while (i <= box->size_1 + box->size_2)
    {
        if(check_string(av[i]))
            box->first_path[i] = ft_atoi(av[i]);
        i++;
    }
    free(box->first_path);
}

void    checker(t_stack *box, int ac, char** av)
{
    first_pars(box, ac, av);
}
