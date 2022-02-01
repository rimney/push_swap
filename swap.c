/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:34 by rimney            #+#    #+#             */
/*   Updated: 2022/01/31 10:47:39 by rimney           ###   ########.fr       */
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

