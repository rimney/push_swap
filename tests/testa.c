/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:09:48 by rmney             #+#    #+#             */
/*   Updated: 2022/01/17 02:40:24 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    ft_instert_element_to_stack_a(int argc, char **argv)
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

void    ft_print(int *tab)
{
    int i;

    i = 0;
    while(tab[i])
        printf("| %d |\n", tab[i++]);
}
int main(int argc, char **argv)
{
    int midpoint;

    int *tab = ft_instert_element_to_stack_a(argc, argv);
    midpoint = tab[argc / 2];
    printf("%d\n", midpoint);
    return (0);
}