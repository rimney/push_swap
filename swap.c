/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:34 by rimney            #+#    #+#             */
/*   Updated: 2022/02/10 04:39:05 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_swap(int *a, int *b)
{
    int *c;

    *c = *a;
    *a = *b;
    *b = *c;
}

void    ft_sa(t_swap *s)
{
    ft_swap(&s->stack_a[0], &s->stack_a[1]);
    printf("sa\n");
}

void    ft_sb(t_swap *s)
{
    ft_swap(&s->stack_b[0], &s->stack_b[1]);
    printf("sb\n");
}

void    ft_ss(t_swap *s)
{
    ft_sa(s);
    ft_sb(s);
    printf("ss\n");
}

