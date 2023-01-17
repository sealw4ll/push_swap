/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_func_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:04:45 by wting             #+#    #+#             */
/*   Updated: 2023/01/17 22:23:35 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack, int bool)
{
	if (stack->alen <= 1)
		return ;
	index_swap(stack->a, 0, 1);
	if (bool == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack, int bool)
{
	if (stack->blen <= 1)
		return ;
	index_swap(stack->b, 0, 1);
	if (bool == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *stack, int bool)
{
	sa(stack, 0);
	sb(stack, 0);
	if (bool == 1)
		write(1, "ss\n", 3);
}
