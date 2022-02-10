/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:46:52 by rimney            #+#    #+#             */
/*   Updated: 2022/02/10 03:08:50 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_not_duplicate(int *stack, int size)
{
    int i;
    int j;

    i = 0;
    while(i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if(stack[i] == stack[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int is_digit(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!((str[i] >= '0' && str[i] <= '9' )|| (str[i] == '-')))
            return (0);
        i++;
    }
    return (1);
}

int check_digit(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if(!is_digit(argv[i]))
            return (0);
        i++;
    }
    return (1);
}
