/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:43:57 by rmney             #+#    #+#             */
/*   Updated: 2022/01/30 17:56:19 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_assign(t_swap *s, int argc, char **argv)
{
    s->stack_a = ft_insert(argc, argv);
    s->stack_a_size = argc - 1;
    s->stack_b_size = 0;
    s->stack_a_midpoint = find_midpoint(s->stack_a, s->stack_a_size);
}

void    ft_sort_small_stack(t_swap *s);

void    ft_sort_medium_stack(t_swap *s)
{
    int i = 0;
    int save_value;
    while(s->stack_a[i])
    {
        if(s->stack_a[i] > s->stack_a_midpoint)
        {
            save_value = s->stack_a[i];
            printf(">>> save value : %d\n", save_value);
            if(s->stack_a[0] == save_value)
            {
                ft_pb(s);
                i++;
            }
            else
            {
                ft_rra(s);
                i = 0;
            }
        }
        else
            i++;
    }
}

void    ft_sort_sort_bis_ass_stack(t_swap *s);

void    push_swap(t_swap *s, int argc, char **argv)
{
    int a;
    int b;

    a = 0;
    b = 0;
    ft_assign(s, argc, argv);
    printf("MID POINT STACK A : %d\n", s->stack_a_midpoint);
    ft_sort_medium_stack(s);
}

int main(int argc, char **argv)
{
    t_swap s;
    int i = 0;
    int j = 0;
    push_swap(&s, argc, argv);
    while(s.stack_a[i])
        printf("[ %d ]\n", s.stack_a[i++]);
   while(s.stack_b[j])
        printf("[[ %d ]]\n", s.stack_b[j++]);
    return (0);
}