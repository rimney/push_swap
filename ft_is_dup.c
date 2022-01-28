/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:42:56 by rmney             #+#    #+#             */
/*   Updated: 2022/01/28 02:43:08 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_not_duplicate(int argc, char **argv)
{
    int i = 0;
    int *array = ft_insert(argc, argv);
    int *tab = malloc(sizeof(int) * (argc - 1));
    while(i < argc - 1)
    {
        if(tab[array[i]] == 0)
            tab[array[i]] = 1;
        else
        {
            printf("dup\n");
            return (0);
        }
        i++;
    }
    free(tab);
    free(array);
    printf("not dup\n");
    return (1);
}