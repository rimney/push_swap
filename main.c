/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:08 by rimney            #+#    #+#             */
/*   Updated: 2022/02/04 02:29:01 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_assign(t_swap *s, int argc, char **argv)
{
    int *mid_copy;

    mid_copy = ft_insert(argc, argv);
    s->stack_a = ft_insert(argc, argv);
    s->stack_a_size = argc - 1;
    s->stack_b_size = 0;
    s->stack_a_midpoint = find_midpoint(mid_copy, s->stack_a_size);
    free(mid_copy);
}


int is_sorted(int *tab, int size)
{
  int i;

  i = 1;
  while(i < size)
  {
    if(tab[i] < tab[i - 1])
      return (0);
    else
      i++;
  }
  return (1);
}

void    ft_sort_5_elements_stack(t_swap *s)
{
    int i;
    int min;

    min = 0;
    i = 0; 
    while(s->stack_a[i] && count_stack_elements(s->stack_a) > 3)
    {
        min = ft_min(s->stack_a, s->stack_a_size);
        if(s->stack_a[0] == min)
        {
            ft_pb(s);
            i++;
        }
        else if(s->stack_a[i] != min)
            i++;
        if(s->stack_a[i] == min)
        {
            ft_send_number_to_top(s, min, i);
            i = 0;
        }
    }
    ft_sort_3_numbers(s);
    ft_pa(s);
    ft_pa(s);
}

int count_stack_elements(int *tab)
{
    int i;

    i = 0;
    while(tab[i])
        i++;
    return (i);
}

void    ft_sort_sort_bis_ass_stack(t_swap *s);

void    push_swap(t_swap *s, int argc, char **argv)
{
    int a;
    int b;

    a = 0;
    b = 0;
    ft_assign(s, argc, argv);
    if(count_stack_elements(s->stack_a) == 5)
        ft_sort_5_elements_stack(s);
}
// look for the smallest numbers and keep sending them till stack a is sorted or empty  then push back from biggest to smallest 4-20 
int main(int argc, char **argv)
{
    t_swap s;
    int i = 0;
    int j = 0;
    push_swap(&s, argc, argv);
    while(s.stack_a[i])
        printf("[ %d ]\n", s.stack_a[i++]);
  while(j < s.stack_b_size)
      printf("[[ %d ]]\n", s.stack_b[j++]);
	printf(" stack A size : >> %d\n" , s.stack_a_size);
	printf(" stack B size : >> %d\n", s.stack_b_size);
    return (0);
}