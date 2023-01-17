/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_func_rev_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:56:08 by wting             #+#    #+#             */
/*   Updated: 2023/01/17 22:13:07 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack, int bool)
{
	int	i;

	if (stack->alen <= 1)
		return ;
	i = stack->alen;
	while (--i > 0)
		index_swap(stack->a, i, i - 1);
	if (bool == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stack, int bool)
{
	int	i;

	if (stack->blen <= 1)
		return ;
	i = stack->blen;
	while (--i > 0)
		index_swap(stack->b, i, i - 1);
	if (bool == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack, int bool)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (bool == 1)
		write(1, "rrr\n", 4);
}
