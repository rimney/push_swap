
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:37:10 by rmney             #+#    #+#             */
/*   Updated: 2022/02/04 15:26:10 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>

typedef struct s_push
{
    int *stack_a;
    int *stack_b;
    int stack_a_size;
    int stack_b_size;
    int stack_a_quarter;
    int stack_a_midpoint;
}   t_swap;

void    ft_pa(t_swap *s);
void    ft_pb(t_swap *s);
void    ft_sa(int *tab);
void    ft_sb(int *tab);
void    ft_ra(t_swap *s);
void    ft_rb(t_swap *s);
void    ft_rra(t_swap *s);
void    ft_rrb(t_swap *s);
void    ft_ss(int *tab1, int *tab2);
void    ft_rrr(t_swap *s);
void    ft_rr(t_swap *s);
void    ft_putstr(char *str);
int *ft_insert(int argc, char **argv);
int     *new_table(int *tab, int size);
int    *push(int *stack, int element, int *old_stack, int size);
int    *new_stack(int *stack, int size);
int ft_is_not_duplicate(int argc, char **argv);
int find_midpoint(int *stack, int size);
int     ft_min(int *tab, int len);
void    ft_send_number_to_top(t_swap *s, int min, int index);
void	ft_sort_3_numbers(t_swap *s);
void    ft_sort_medium_numbers(t_swap *s);
int     count_stack_elements(int *tab);
void    ft_sort_5_elements_stack(t_swap *s);
void    ft_sort_medium_elements_stack(t_swap *s);
# endif