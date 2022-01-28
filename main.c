/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:43:57 by rmney             #+#    #+#             */
/*   Updated: 2022/01/28 03:18:17 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_swap  s;
    int     i;
    int     j;

    s.stack_a_size = argc - 1;
    s.stack_b_size = 0;
    s.stack_a = ft_insert(argc, argv);
    ft_pb(&s);
    ft_pb(&s);
    ft_ra(&s);
    ft_rb(&s);
    ft_rr(&s);
    while(s.stack_a[i])
        printf("| %d |\n", s.stack_a[i++]);
    while(s.stack_b[j])
        printf("|| %d ||\n", s.stack_b[j++]);
    return (0);
}