/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:13:16 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 22:22:09 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	i;

	if (stack->alen <= 1)
		return ;
	i = -1;
	while (++i < stack->alen - 1)
		index_swap(stack->a, i, i + 1);
}

void	rb(t_stack *stack)
{
	int	i;

	if (stack->blen <= 1)
		return ;
	i = -1;
	while (++i < stack->blen - 1)
		index_swap(stack->b, i, i + 1);
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}
