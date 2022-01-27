/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmney <rmneyz@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:37:10 by rmney             #+#    #+#             */
/*   Updated: 2022/01/25 02:59:43 by rmney            ###   ########.fr       */
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
void    ft_ra(int *tab, int size);
void    ft_rb(int *tab, int size);
void    ft_rra(int *tab, int size);
void    ft_rrb(int *tab, int size);
void    ft_ss(int *tab1, int *tab2);
void    ft_rrr(int *tab1, int *tab2, int size);
void    ft_rr(int *tab1, int *tab2, int size);
void    ft_putstr(char *str);
int    *ft_instert_elements_to_stack_a(int argc, char **argv);
int     *new_table(int *tab, int size);
# endif