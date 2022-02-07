/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:08 by rimney            #+#    #+#             */
/*   Updated: 2022/02/07 03:37:21 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  ft_set_quarters(t_swap *s)
{
  if(s->stack_a_size < 100)
    s->stack_a_quarter = 2;
  else if(s->stack_a_size >= 100 && s->stack_a_size < 500)
    s->stack_a_quarter = 2;
  else if(s->stack_a_size >= 500)
    s->stack_a_quarter = 10;
}

static void ft_assign(t_swap *s, int argc, char **argv)
{
    int *mid_copy;

    s->stack_a = ft_insert(argc, argv);
    s->stack_a_size = argc - 1;
    s->stack_b_size = 0;
    s->stack_a_quarter = 0;
    ft_set_quarters(s);
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

int count_stack_elements(int *tab)
{
    int i;

    i = 0;
    while(tab[i])
        i++;
    return (i);
}

int *ft_copy_stack_elements(t_swap *s)
{
  int i;
  int *stack;

  i = 0;
  stack = malloc(sizeof(int) * s->stack_a_size);
  while(i < s->stack_a_size)
  {
    stack[i] = s->stack_a[i];
    i++;
  }
  return(stack);
}

static void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int rev;

    i = 1;
    while(i < size)
    {
        if(tab[i] < tab[i - 1])
        {
            rev = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = rev;
            i = 1;
        }
        else
            i++;
    }
}

int  ft_create_midpoints(t_swap *s, int argc, char **argv)
{
  int i;
  int *temp_stack;
  int counter;

  temp_stack = ft_copy_stack_elements(s);
  ft_sort_int_tab(temp_stack, s->stack_a_size);
  counter = s->stack_a_size / s->stack_a_quarter;
  free(temp_stack);
  printf("%d >>>\n", temp_stack[counter]);
  return (temp_stack[counter]);
}

void    ft_send_number_to_top_stack_b(t_swap *s, int max, int index)
{
    while(s->stack_b[0] != max)
    {
        if(index > s->stack_b_size / 2)
            ft_rrb(s);
        else
            ft_rb(s);
        if(s->stack_b[0] == max)
        {
            ft_pa(s);
            return ;
        }
    }
}

void    ft_sort_bis_ass_stack(t_swap *s, int argc, char **argv)
{
  int i;
  int mid_point_holder;

  i = 0;
  mid_point_holder = ft_create_midpoints(s, argc, argv);
  while(s->stack_a[i])
  {
    if(s->stack_a[i] < mid_point_holder)
    {
      ft_send_number_to_top_stack_a(s, s->stack_a[i], i);
      i = 0;
    }
    i++;
  }
}


void  ft_2nd_step_sort_big_ass_stack(t_swap *s)
{
  int i;
  int min;

  i = 0;
  min = 0;
  while(count_stack_elements(s->stack_a) != 1 && s->stack_a[i])
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
        ft_send_number_to_top_stack_a(s, min, i);
        i = 0;
    }
  }
}

void  ft_3nd_step_sort_big_ass_stack(t_swap *s)
{
  int i;
  int max;

  i = 0;
  max = 0;
  while(count_stack_elements(s->stack_b) != 1 && s->stack_b[i])
  {
    max = ft_max(s->stack_b, s->stack_b_size);
    if(s->stack_b[0] == max)
    {
        ft_pa(s);
        i++;
    }
    else if(s->stack_b[i] != max)
        i++;
    if(s->stack_b[i] == max)
    {
        ft_send_number_to_top_stack_b(s, max, i);
        i = 0;
    }
  }
}



void    push_swap(t_swap *s, int argc, char **argv)
{
    int stack_a_save = s->stack_a_size;

    while(s->stack_a_quarter != 1)
    {
      ft_sort_bis_ass_stack(s, argc, argv);
      s->stack_a_quarter -= 1;
    }

}

int main(int argc, char **argv)
{
    t_swap s;
    int i = 0;
    int j = 0;
    ft_assign(&s, argc, argv);
    push_swap(&s, argc, argv);
    while(s.stack_a[i])
        printf("[ %d ]\n", s.stack_a[i++]);
  while(j < s.stack_b_size)
      printf("[[ %d ]]\n", s.stack_b[j++]);
	printf(" stack A size : >> %d\n" , s.stack_a_size);
	printf(" stack B size : >> %d\n", s.stack_b_size);
  //system("leaks a.out");
    return (0);
}