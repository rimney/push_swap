/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_midpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:05:46 by rmney             #+#    #+#             */
/*   Updated: 2022/01/29 04:08:54 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int rev;

    i = 1;
    while(i < size)
    {
        if(tab[i] < tab[i - 1])
        {
            rev = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = rev;
            i = 1;
        }
        else
            i++;
    }
}

int find_midpoint(int *stack, int size)
{
    int midpoint;
    ft_sort_int_tab(stack, size);
    midpoint = stack[size / 2];
    return (midpoint);
}