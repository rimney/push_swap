/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 02:04:01 by rimney            #+#    #+#             */
/*   Updated: 2022/02/12 02:34:32 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./get_next_line/get_next_line.h"
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_handle_instructions(t_swap *s, char *instructions)
{
	if (ft_strcmp(instructions, "pa\n") == 0)
		ft_pa(s, 0);
	else if (ft_strcmp(instructions, "pb\n") == 0)
		ft_pb(s, 0);
	else if (ft_strcmp(instructions, "sa\n") == 0)
		ft_sa(s, 0);
	else if (ft_strcmp(instructions, "sb\n") == 0)
		ft_sb(s, 0);
	else if (ft_strcmp(instructions, "ra\n") == 0)
		ft_ra(s, 0);
	else if (ft_strcmp(instructions, "rb\n") == 0)
		ft_rb(s, 0);
	else if (ft_strcmp(instructions, "rra\n") == 0)
		ft_rra(s, 0);
	else if (ft_strcmp(instructions, "rrb\n") == 0)
		ft_rrb(s, 0);
	else
		return (0);
	return (1);
}

int	ft_check_instructions(t_swap *s, int fd)
{
	char	*instructions;

	instructions = get_next_line(fd);
	while (instructions)
	{
		if(!ft_handle_instructions(s, instructions))
		{
			ft_print("Error\n");
			return (0);
		}
		free(instructions);
		instructions = get_next_line(fd);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if(argc > 1)
	{
		t_swap s;
		s.stack_a = ft_insert(argc, argv);
		s.stack_a_size = argc - 1;
		s.stack_b_size = 0;
		if (!ft_is_not_duplicate(s.stack_a, s.stack_a_size)
			|| !check_digit(argc, argv)
			|| !ft_check_int_min_max(argc, argv))
		{
			ft_print("Error\n");
			return (0);
		}
		ft_check_instructions(&s, 0);
		if (is_sorted(s.stack_a, s.stack_a_size))
		{
			ft_print("OK\n");
			return (0);
		}
		else
		{
			ft_print("KO\n");
			return (0);
		}
	}
	return (0);		
}
