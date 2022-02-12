/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:15 by rimney            #+#    #+#             */
/*   Updated: 2022/02/12 02:13:19 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*push(int *stack, int element, int *old_stack, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	stack = malloc(sizeof(int) * (size + 1));
	stack[0] = element;
	while (i < size)
	{
		stack[j] = old_stack[i];
		i++;
		j++;
	}
	return (stack);
}

void	ft_pb(t_swap *s, int flag)
{
	int	*temp;

	if (!s->stack_b)
	{
		s->stack_b = malloc(sizeof(int));
		s->stack_b[0] = s->stack_a[0];
		s->stack_a_size -= 1;
		s->stack_b_size += 1;
		s->stack_a = new_stack(s->stack_a, s->stack_a_size);
		if (flag == 1)
			ft_print("pb\n");
	}
	else
	{
		s->stack_b_size += 1;
		s->stack_a_size -= 1;
		temp = s->stack_b;
		s->stack_b = push(s->stack_b, s->stack_a[0],
				s->stack_b, s->stack_b_size);
		free(temp);
		s->stack_a = new_stack(s->stack_a, s->stack_a_size);
		if (flag == 1)	
			ft_print("pb\n");
	}
}

void	ft_pa(t_swap *s, int flag)
{
	int	*temp;

	s->stack_b_size -= 1;
	s->stack_a_size += 1;
	temp = s->stack_a;
	s->stack_a = push(s->stack_a, s->stack_b[0],
			s->stack_a, s->stack_a_size);
	free(temp);
	s->stack_b = new_stack(s->stack_b, s->stack_b_size);
	if (flag == 1)
		ft_print("pa\n");
}
