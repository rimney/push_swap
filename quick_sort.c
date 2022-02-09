/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:46:44 by rimney            #+#    #+#             */
/*   Updated: 2022/02/07 21:12:41 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int rev;

    i = 1;
    while(i < size)
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