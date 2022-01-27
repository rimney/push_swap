/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 00:26:24 by rmney             #+#    #+#             */
/*   Updated: 2022/01/17 02:45:44 by rmney            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    ft_sort(int *tab, int len)
{
    int i;
    int rev;

    i = 1;
    while(i < len)
    {
        if(tab[i] < tab[i - 1])
        {
            rev = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = rev;
            i = 1;
        }
        else
            i++;
    }
}

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

void    ft_print(int *tab)
{
    int i;

    i = 0;
    while(tab[i])
        printf("| %d |\n", tab[i++]);
}
int main(int argc, char **argv)
{
    int *tab = ft_instert_elements_to_stack_a(argc, argv);
    ft_sort(tab, argc - 1);
    int midpoint = tab[argc / 2];
    printf("%d\n", midpoint);
}