/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:00:29 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 23:04:39 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	if (stack->blen == 0)
		return ;
	i = stack->alen + 1;
	while (--i > 0)
		index_swap(stack->a, i, i - 1);
	stack->a[0] = stack->b[0];
	i = -1;
	while (++i < stack->blen - 1)
		index_swap(stack->b, i, i + 1);
	stack->blen -= 1;
	stack->alen += 1;
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->alen == 0)
		return ;
	i = stack->blen + 1;
	while (--i > 0)
		index_swap(stack->b, i, i - 1);
	stack->b[0] = stack->a[0];
	i = -1;
	while (++i < stack->alen - 1)
		index_swap(stack->a, i, i + 1);
	stack->alen -= 1;
	stack->blen += 1;
}
