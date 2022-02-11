/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:40:46 by rimney            #+#    #+#             */
/*   Updated: 2022/02/11 17:36:41 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_quarters(t_swap *s)
{
	if (s->stack_a_size < 100)
		s->stack_a_quarter = 2;
	else if (s->stack_a_size >= 100 && s->stack_a_size < 500)
		s->stack_a_quarter = 4;
	else if (s->stack_a_size >= 500)
		s->stack_a_quarter = 8;
}

void	ft_assign(t_swap *s, int argc, char **argv)
{
	s->stack_a = ft_insert(argc, argv);
	s->stack_a_size = argc - 1;
	s->stack_b_size = 0;
	s->stack_a_quarter = 0;
	ft_set_quarters(s);
}

int	ft_create_midpoints(t_swap *s)
{
	int	*temp_stack;
	int	counter;

	temp_stack = ft_copy_stack_elements(s);
	ft_sort_int_tab(temp_stack, s->stack_a_size);
	counter = s->stack_a_size / s->stack_a_quarter;
	s->stack_a_midpoint = temp_stack[s->stack_a_size];
	free(temp_stack);
	return (temp_stack[counter]);
}
