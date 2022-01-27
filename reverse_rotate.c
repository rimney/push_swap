/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 04:27:24 by rmney             #+#    #+#             */
/*   Updated: 2022/01/18 04:35:54 by rmney            ###   ########.fr       */
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

void    ft_rra(int *tab, int size)
{
    reverse_rotate(tab, size);
    printf("rra\n");
}

void    ft_rrb(int *tab, int size)
{
    reverse_rotate(tab, size);
    printf("rrb\n");
}

void    ft_rra(int *tab, int size)
{
    reverse_rotate(tab1, size);
    reverse_rotate(tab2, size);
    printf("rrr\n");
}
