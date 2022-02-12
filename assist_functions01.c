/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assist_functions01.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:50:02 by rimney            #+#    #+#             */
/*   Updated: 2022/02/12 02:31:51 by rimney           ###   ########.fr       */
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

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}