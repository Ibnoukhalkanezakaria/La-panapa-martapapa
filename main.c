/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 09:44:32 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char *p = ft_strdup("");
// char *get_P;
// char *string;
// char *get_String;

// int i = 1;
// int k = 0;
// while (av[i] != NULL)
// {
//     int j = 0;
//     while(av[i][j])
//     {
//         p[k++] = av[i][j];
//         if(av[i][j + 1] == '\0')
//             p[k++] = ' ';
//         j++;
//     }
//     // if (av[i] )
//     // get_P = p;
//     // printf("av[i]: %s\n", ft_strjon(av[i], "X"));
//     // printf("%s\n", ft_strjon(av[i], "L"));
//     // get_String = av[i];
//     // av[i] = ft_strjon(get_String, " ");
//     // p = ft_strjon(get_P, ft_strjon(av[i], " "));
//     i++;
// }
// p[k] = '\0';


#include "push_swap.h"

long	ft_atoi(char *s)
{
	long long	number;
	long long	one;

	one = 1;
	number = 0;
	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			one *= -1;
		s++;
	}
	if (!(*s >= '0' && *s <= '9'))
		error(1);
	while (*s >= '0' && *s <= '9')
	{
		number = number * 10 + (*s - '0');
		s++;
	}
	return (number * one);
}


int main()
{
    printf("%ld\n", ft_atoi("c88"));
}
