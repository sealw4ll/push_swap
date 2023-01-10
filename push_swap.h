/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:02:24 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 23:02:48 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
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

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

void	pa(t_stack *stack);
void	pb(t_stack *stack);

void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

void	init_vars(t_stack *stack);
void	quick_exit(t_stack *stack);
void	error_parse(int ac, char **av, t_stack *stack);

void	parse_string(char *av, t_stack *stack);
void	parse_arr(char **av, t_stack *stack);

void	check_sorted(t_stack *stack);
void	exit_free(t_stack *stack, int bool);

#endif