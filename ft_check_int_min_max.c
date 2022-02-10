/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int_min_max.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:08:54 by rimney            #+#    #+#             */
/*   Updated: 2022/02/10 03:16:45 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long ft_atol(char *str)
{
    int i;
    long num;
    int sign;

    i = 0;
    num = 0;
    sign = 1;
    while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    return (num * sign);
}

int ft_check_int_min_max(int argc, char **argv)
{
    int i;

    i = 1;
    while(i < argc)
    {
        if(ft_atol(argv[i]) > 2147483647)
        {
            printf("gi\n");
            return (0);
        }
        i++;
    }  
    return (1);
}

