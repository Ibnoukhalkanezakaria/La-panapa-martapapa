/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/19 10:15:01 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

size_t	ft_strlen(char *s);
long	ft_atoi(char *s);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *s);
int		*numbers(int ac, char **av);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);
void	checker(int ac, char **av);
void    duplicate_number(char *s);
void    error(int val);

#endif