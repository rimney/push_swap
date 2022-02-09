/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:13:16 by rimney            #+#    #+#             */
/*   Updated: 2022/02/08 22:26:43 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_medium_elements_stack(t_swap *s)
{
    int i;
    int min;
    int stack_a_rest;

    min = 0;
    i = 0;
    stack_a_rest = s->stack_a_size;
    while(s->stack_a[i] && s->stack_a_size >= 3)
    {
        min = ft_min(s->stack_a, s->stack_a_size);
        if(s->stack_a[0] == min)
        {
            ft_pb(s);
            i++;
        }
        else if(s->stack_a[i] != min)
            i++;
        if(s->stack_a[i] == min)
        {
            ft_send_number_to_top_stack_a(s, min, i);
            i = 0;
        }
        if(s->stack_a_size == 3)
        {
            while(!is_sorted(s->stack_a, s->stack_a_size))
                ft_sort_3_numbers(s);
        }
        while(s->stack_b_size)
            ft_pa(s);
    }
}

