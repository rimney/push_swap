/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:46:52 by rimney            #+#    #+#             */
/*   Updated: 2022/01/31 10:46:54 by rimney           ###   ########.fr       */
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