/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assist_functions01.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:50:02 by rimney            #+#    #+#             */
/*   Updated: 2022/02/11 03:38:19 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int *tab, int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (max > tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

int	ft_max(int *tab, int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
