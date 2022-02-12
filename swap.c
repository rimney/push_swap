/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:34 by rimney            #+#    #+#             */
/*   Updated: 2022/02/12 02:14:02 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sa(t_swap *s, int flag)
{
	ft_swap(&s->stack_a[0], &s->stack_a[1]);
	if (flag == 1)
		ft_print("sa\n");
}

void	ft_sb(t_swap *s, int flag)
{
	ft_swap(&s->stack_b[0], &s->stack_b[1]);
	if (flag == 1)
		ft_print("sb\n");
}

void	ft_ss(t_swap *s, int flag)
{
	ft_sa(s, flag);
	ft_sb(s, flag);
	ft_print("ss\n");
}
