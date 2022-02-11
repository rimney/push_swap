/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:08 by rimney            #+#    #+#             */
/*   Updated: 2022/02/11 17:44:01 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	push_swap(t_swap *s)
{
	int	stack_a_save;

	stack_a_save = s->stack_a_size;
	if (s->stack_a_size <= 3)
	{
		while (!is_sorted(s->stack_a, s->stack_a_size))
			ft_sort_3_numbers(s);
	}
	else if (s->stack_a_size > 3 && s->stack_a_size < 50)
		ft_sort_medium_stack(s);
	else if (s->stack_a_size >= 50)
	{
		while (s->stack_a_quarter != 1)
		{
			ft_sort_big_stack_step_one(s);
			s->stack_a_quarter -= 1;
		}
		ft_sort_big_stack_step_two(s);
		while (s->stack_a_size + 1 < stack_a_save)
			ft_sort_big_stack_step_three(s);
		if (s->stack_a_size == stack_a_save - 1)
			ft_pa(s);
	}
}

int	main(int argc, char **argv)
{
	t_swap	s;

	ft_assign(&s, argc, argv);
	if (!ft_is_not_duplicate(s.stack_a, s.stack_a_size)
		|| !check_digit(argc, argv)
		|| !ft_check_int_min_max(argc, argv))
	{
		ft_print("Error\n");
		return (0);
	}
	if (s.stack_a_size == 1 || is_sorted(s.stack_a, s.stack_a_size))
		return (0);
	push_swap(&s);
	return (0);
}
