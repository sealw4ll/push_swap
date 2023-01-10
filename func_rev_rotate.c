/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:56:08 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 22:22:39 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	i;

	if (stack->alen <= 1)
		return ;
	i = stack->alen;
	while (--i > 0)
		index_swap(stack->a, i, i - 1);
}

void	rrb(t_stack *stack)
{
	int	i;

	if (stack->blen <= 1)
		return ;
	i = stack->blen;
	while (--i > 0)
		index_swap(stack->b, i, i - 1);
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
