/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assist_functions00.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:07:36 by rimney            #+#    #+#             */
/*   Updated: 2022/02/12 02:14:40 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_send_number_to_top_stack_a(t_swap *s, int min, int index)
{
	if (s->stack_a[1] == min)
	{
		ft_sa(s, 1);
		ft_pb(s, 1);
		return ;
	}
	while (s->stack_a[0] != min)
	{
		if (s->stack_a[0] == min && s->stack_a_size < 3)
			ft_pb(s, 1);
		if (index >= s->stack_a_size / 2)
			ft_rra(s, 1);
		else
			ft_ra(s, 1);
		if (s->stack_a[0] == min)
		{
			ft_pb(s, 1);
			return ;
		}
	}
}

void	ft_send_number_to_top_stack_b(t_swap *s, int max, int index)
{
	if (s->stack_b[1] == max)
	{
		ft_sb(s, 1);
		ft_pa(s, 1);
		return ;
	}
	while (s->stack_b[0] != max)
	{
		if (index > s->stack_b_size / 2)
			ft_rrb(s, 1);
		else
			ft_rb(s, 1);
		if (s->stack_b[0] == max)
		{
			ft_pa(s, 1);
			return ;
		}
	}
}

int	*ft_copy_stack_elements(t_swap *s)
{
	int	i;
	int	*stack;

	i = 0;
	stack = malloc(sizeof(int) * s->stack_a_size);
	while (i < s->stack_a_size)
	{
		stack[i] = s->stack_a[i];
		i++;
	}
	return (stack);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
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

int	is_sorted(int *tab, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
			return (0);
		else
			i++;
	}
	return (1);
}
