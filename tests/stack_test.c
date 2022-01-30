/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 04:16:55 by rmney             #+#    #+#             */
/*   Updated: 2022/01/25 17:55:45 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int find_min(int *tab, int size)
{
    int i;
    int min;

    i = 0;
    min = tab[i];
    while(i < size)
    {
        if(min > tab[i])
            min = tab[i];
        i++;
    }
    printf("\n%d\n", min);
    return (min);
}



int main(int argc, char **argv)
{
    t_swap s;
    
    s.stack_a = ft_instert_elements_to_stack_a(argc, argv);
    s.stack_a_size = argc - 1;
    s.stack_b_size = 0;
    int i = 0;
    int j = 0;
    ft_pb(&s);
    ft_pb(&s);
    ft_pa(&s);

    while(s.stack_a[i])
        printf("|| %d ||\n", s.stack_a[i++]);
    while(s.stack_b[j])
    {
        printf("| %d | index==>%d\n", s.stack_b[j], j);
        j++;
    }
    printf("<< %d >>\n", s.stack_a_size);
    printf("<< %d >>\n", s.stack_b_size);
    return (0);
} 