/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 04:27:24 by rmney             #+#    #+#             */
/*   Updated: 2022/01/18 04:26:35 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_rotate(int *tab, int size)
{
    int first = tab[0];
    int swap;
    int i;

    i = 1;
    while(i < size)
    {
        swap = tab[i];
        tab[i] = tab[i - 1];
        tab[i - 1] = swap;
        i++;
    }
    tab[size] = first;
}

void    ft_ra(int *tab, int size)
{
    ft_rotate(tab, size);
    printf("ra\n");
}

void    ft_rb(int *tab, int size)
{
    ft_rotate(tab, size);
    printf("rb\n");
}

void    ft_rr(int *tab1, int *tab2, int size)
{
    ft_rotate(tab1, size);
    ft_rotate(tab2, size);
    printf("rr\n");
}