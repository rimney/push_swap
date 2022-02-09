/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_medium_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:25:24 by rimney            #+#    #+#             */
/*   Updated: 2022/02/09 03:42:12 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_min(int *tab, int len)
{
    int i;
    int max;

    i = 0;
    max = tab[i];
    while(i < len)
    {
        if(max > tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

void    ft_send_number_to_top_stack_a(t_swap *s, int min, int index)
{
    while(s->stack_a[0] != min)
    {
        if(s->stack_a[0] == 0)
            ft_pb(s);
        if(index >= s->stack_a_size / 2)
            ft_rra(s);
        else
            ft_ra(s);
        if(s->stack_a[0] == min)
        {
            ft_pb(s);
            return ;
        }
    }
}

void	ft_sort_3_numbers(t_swap *s)
{
    if(s->stack_a_size == 2 && !is_sorted(s->stack_a, s->stack_a_size))
        ft_sa(s->stack_a);
    else if(s->stack_a[0] < s->stack_a[1] && s->stack_a[0] > s->stack_a[2]) // 2 3 1
        ft_rra(s);
    else  if(s->stack_a[0] > s->stack_a[1] && s->stack_a[1] > s->stack_a[2]) // 3 2 1
    {
        ft_ra(s);
        ft_sa(s->stack_a);
    }
  else  if(s->stack_a[0] < s->stack_a[1] && s->stack_a[1] > s->stack_a[2])  // 1 3 2
    {
        ft_rra(s);
        ft_sa(s->stack_a);
    }
   else if(s->stack_a[0] > s->stack_a[1] && s->stack_a[1] < s->stack_a[2]) // 3 1 2
        ft_ra(s);
}

int ft_max(int *tab, int len)
{
    int i;
    int max;

    i = 0;
    max = tab[i];
    while(i < len)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}