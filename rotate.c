/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 04:27:24 by rmney             #+#    #+#             */
/*   Updated: 2022/01/28 03:06:23 by rmney            ###   ########.fr       */
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
    tab[size] = 0;
}

void    ft_ra(t_swap *s)
{
    ft_rotate(s->stack_a, s->stack_a_size);
    printf("ra\n");
}

void    ft_rb(t_swap *s)
{
    ft_rotate(s->stack_b, s->stack_b_size);
    printf("rb\n");
}

void    ft_rr(t_swap *s)
{
    ft_rotate(s->stack_a, s->stack_a_size);
    ft_rotate(s->stack_b, s->stack_b_size);
    printf("rr\n");
}