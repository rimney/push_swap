/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inster_element_to_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 04:18:58 by rmney             #+#    #+#             */
/*   Updated: 2022/01/21 04:19:10 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    *ft_instert_elements_to_stack_a(int argc, char **argv)
{
    int i;
    int nb;
    int *tab;
    i = 1;
    int j = 0;
    tab = malloc(sizeof(int) * (argc + 1));
    while(i < argc)
    {
        tab[j] = atoi(argv[i]);
        i++;
        j++;
    }
    return (tab);
}