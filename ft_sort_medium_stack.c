/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_medium_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:25:24 by rimney            #+#    #+#             */
/*   Updated: 2022/02/11 03:51:59 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3_numbers(t_swap *s)
{
	if (s->stack_a_size == 2 && !is_sorted(s->stack_a, s->stack_a_size))
		ft_sa(s);
	else if (s->stack_a[0] < s->stack_a[1]
		&& s->stack_a[0] > s->stack_a[2])
		ft_rra(s);
	else if (s->stack_a[0] > s->stack_a[1]
		&& s->stack_a[1] > s->stack_a[2])
	{
		ft_ra(s);
		ft_sa(s);
	}
	else if (s->stack_a[0] < s->stack_a[1]
		&& s->stack_a[1] > s->stack_a[2])
	{
		ft_rra(s);
		ft_sa(s);
	}
	else if (s->stack_a[0] > s->stack_a[1]
		&& s->stack_a[1] < s->stack_a[2])
		ft_ra(s);
}

void	ft_sort_medium_stack_step_one(t_swap *s)
{
	int	i;
	int	min;

	i = 0;
	while (i < s->stack_a_size && s->stack_a_size > 3)
	{
		min = ft_min(s->stack_a, s->stack_a_size);
		if (s->stack_a[0] == min)
			ft_pb(s);
		else if (s->stack_a[i] != min)
			i++;
		else if (s->stack_a[i] == min)
		{
			ft_send_number_to_top_stack_a(s, min, i);
			i = 0;
		}
	}
}

void	ft_sort_medium_stack_step_two(t_swap *s)
{
	int	i;
	int	max;

	i = 0;
	if (s->stack_a_size == 3)
	{
		while (!is_sorted(s->stack_a, s->stack_a_size))
			ft_sort_3_numbers(s);
		while (s->stack_b_size)
		{
			max = ft_max(s->stack_b, s->stack_b_size);
			if (s->stack_b[0] == max)
				ft_pa(s);
			else if (s->stack_b[i] != max)
				i++;
			else if (s->stack_b[i] == max)
				ft_send_number_to_top_stack_b(s, max, i);
		}
	}
}

void	ft_sort_medium_stack(t_swap *s)
{
	ft_sort_medium_stack_step_one(s);
	ft_sort_medium_stack_step_two(s);
}
