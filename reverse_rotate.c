/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 04:27:24 by rmney             #+#    #+#             */
/*   Updated: 2022/01/28 03:11:59 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void reverse_rotate(int *tab, int size)
{
    int i;

    i = size - 1;
    int swap;
    while(i > 0)
    {
       swap = tab[i];
       tab[i] = tab[i - 1];
       tab[i - 1] = swap;
        i--;  
    }
}

void    ft_rra(t_swap *s)
{
    reverse_rotate(s->stack_a, s->stack_a_size);
    printf("rra\n");
}

void    ft_rrb(t_swap *s)
{
    reverse_rotate(s->stack_b, s->stack_b_size);
    printf("rrb\n");
}

void    ft_rrr(t_swap *s)
{
    reverse_rotate(s->stack_a, s->stack_a_size);
    reverse_rotate(s->stack_b, s->stack_b_size);
    printf("rrr\n");
}
