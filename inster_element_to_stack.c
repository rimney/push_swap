/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inster_element_to_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:00 by rimney            #+#    #+#             */
/*   Updated: 2022/02/04 00:55:48 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_atoi(char *str)
{
    int i;
    int num;
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
    return (num);
}

int *ft_insert(int argc, char **argv)
{
    int i;
    int nb;
    int j;
    int *tab;

    i = 1;
    j = 0;
    tab = malloc(sizeof(int) * argc);
    while(i < argc)
    {
        tab[j] = atoi(argv[i]);
        i++;
        j++;
    }
    tab[j] = '\0';
    return(tab);
}

int    *new_stack(int *stack, int size)  
{
    int *temp;
    int i;
    int j;

    temp = stack;
    i = 0;
    j = 1;
    stack = malloc(sizeof(int) * size + 1);
    while(i < size)
    {
        stack[i] = temp[j];
        i++;
        j++;
    }
    stack[size] = 0;
    free(temp);
    return(stack);    
}
