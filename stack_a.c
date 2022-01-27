/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 04:15:15 by rmney             #+#    #+#             */
/*   Updated: 2022/01/17 04:27:11 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void    ft_sa(int *tab)
{
    ft_swap(&tab[0], &tab[1]);
    printf("sa\n");
}

void    ft_sb(int *tab)
{
    ft_swap(&tab[0], &tab[1]);
    printf("sb\n");
}

void    ft_ss(int *tab1, int *tab2)
{
    ft_sa(tab1);
    ft_sb(tab2);
    printf("ss\n");
}
