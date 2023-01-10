/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:04:45 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 23:04:28 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	if (stack->alen <= 1)
		return ;
	index_swap(stack->a, 0, 1);
}

void	sb(t_stack *stack)
{
	if (stack->blen <= 1)
		return ;
	index_swap(stack->b, 0, 1);
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}
