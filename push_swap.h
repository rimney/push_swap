/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:19:42 by rimney            #+#    #+#             */
/*   Updated: 2022/02/12 03:39:10 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_push
{
	int	*stack_a;
	int	*stack_b;
	int	stack_a_size;
	int	stack_b_size;
	int	stack_a_quarter;
	int	stack_a_midpoint;
}	t_swap;

void	ft_pa(t_swap *s, int flag);
void	ft_pb(t_swap *s, int flag);
void	ft_sa(t_swap *s, int flag);
void	ft_sb(t_swap *s, int flag);
void	ft_ra(t_swap *s, int flag);
void	ft_rb(t_swap *s, int flag);
void	ft_rra(t_swap *s, int flag);
void	ft_rrb(t_swap *s, int flag);
void	ft_ss(t_swap *s, int flag);
void	ft_rrr(t_swap *s);
void	ft_rr(t_swap *s);
int		ft_atoi(char *str);
long	ft_atol(char *str);
int		is_digit(char *str);
void	ft_print(char *str);
void	ft_putstr(char *str);

int		ft_min(int *tab, int len);
int		ft_max(int *tab, int len);
void	ft_sort_3_numbers(t_swap *s);
int		is_sorted(int *tab, int size);
void	ft_print(char *str);
int		*new_table(int *tab, int size);
int		count_stack_elements(int *tab);
void	ft_sort_medium_stack(t_swap *s);
int		*new_stack(int *stack, int size);
void	ft_sort_medium_numbers(t_swap *s);
int		*ft_insert(int argc, char **argv);
int		*ft_copy_stack_elements(t_swap *s);
int		check_digit(int argc, char **argv);
int		find_midpoint(int *stack, int size);
void	ft_sort_5_elements_stack(t_swap *s);
void	ft_sort_int_tab(int *tab, int size);
void	ft_sort_big_stack_step_two(t_swap *s);
void	ft_sort_big_stack_step_three(t_swap *s);
void	ft_sort_medium_elements_stack(t_swap *s);
void	ft_sort_medium_stack_step_two(t_swap *s);
void	ft_sort_medium_stack_step_one(t_swap *s);
int		ft_is_not_duplicate(int *stack, int size);
int		ft_check_int_min_max(int argc, char **argv);
void	ft_assign(t_swap *s, int argc, char **argv);
int		ft_create_midpoints(t_swap *s);
int		*push(int *stack, int element, int *old_stack, int size);
void	ft_send_number_to_top_stack_b(t_swap *s, int max, int index);
void	ft_send_number_to_top_stack_a(t_swap *s, int min, int index);
void	ft_sort_big_stack_step_one(t_swap *s);
#endif