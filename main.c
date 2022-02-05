/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:47:08 by rimney            #+#    #+#             */
/*   Updated: 2022/02/05 23:22:36 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_assign(t_swap *s, int argc, char **argv)
{
    int *mid_copy;

    s->stack_a = ft_insert(argc, argv);
    s->stack_a_size = argc - 1;
    s->stack_b_size = 0;
    s->stack_a_quarter = 0;
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
 // printf("big : %d\n", temp_stack[counter]);
  //i = 0;
  // while(temp_stack[i])
  //   printf("-->%d--<\n", temp_stack[i++]);
  return (temp_stack[counter]);
}


void    ft_sort_sort_bis_ass_stack(t_swap *s, int argc, char **argv)
{
  int i;

  i  = 0;
  int mid_point_holder = ft_create_midpoints(s, argc, argv);
  while(s->stack_a[i])
  {
    if(s->stack_a[i] < mid_point_holder)
    {
      ft_send_number_to_top(s, s->stack_a[i], i);
      i = 0;
    }
    i++;
  }
  s->stack_a_quarter -= 1;
}

void    push_swap(t_swap *s, int argc, char **argv)
{
    int a;
    int b;

    a = 0;
    b = 0;
    ft_assign(s, argc, argv);
    s->stack_a_quarter = 4;
    while(s->stack_a_quarter != 0)
      ft_sort_sort_bis_ass_stack(s, argc, argv);

  
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
 // system("leaks a.out");
    return (0);
}