/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:02:24 by wting             #+#    #+#             */
/*   Updated: 2023/02/08 00:58:46 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		alen;
	int		blen;
}				t_stack;

void	index_swap(int *list, int i1, int i2);
int		num_check(char *str);

void	sa(t_stack *stack, int bool);
void	sb(t_stack *stack, int bool);
void	ss(t_stack *stack, int bool);

void	pa(t_stack *stack, int bool);
void	pb(t_stack *stack, int bool);

void	ra(t_stack *stack, int bool);
void	rb(t_stack *stack, int bool);
void	rr(t_stack *stack, int bool);

void	rra(t_stack *stack, int bool);
void	rrb(t_stack *stack, int bool);
void	rrr(t_stack *stack, int bool);

void	init_vars(t_stack *stack);
void	quick_exit(void);
void	error_parse(int ac, char **av, t_stack *stack);

void	parse_string(char *av, t_stack *stack);
void	parse_arr(char **av, t_stack *stack);

int		check_sorted(t_stack *stack, int bool);
void	exit_free(t_stack *stack, int bool);

void	bubbleSort(int *arr, int n);
void	indexing(t_stack *stack);
void	swap(int *a, int *b);
int		*dup_arr(int *arr, int len);

void	sort_3(t_stack *stack, int bool);
void	ps_radixsort(t_stack *stack);
void	sort_5(t_stack *stack);

#endif