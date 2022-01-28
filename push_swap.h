/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:37:10 by rmney             #+#    #+#             */
/*   Updated: 2022/01/28 03:11:41 by rmney            ###   ########.fr       */
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
# endif