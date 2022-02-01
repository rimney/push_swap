/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:21:08 by rimney            #+#    #+#             */
/*   Updated: 2022/01/31 16:23:13 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int main(int argc, char **argv)
{
    int *tab = ft_insert(argc, argv);
    int i = 0;
    while(tab[i])
        printf("%d\n", tab[i++]);
    printf(" >> >> %d\n", ft_max(tab, argc - 1));
}