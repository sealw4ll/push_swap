/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_hardcode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:01:13 by wting             #+#    #+#             */
/*   Updated: 2023/02/08 01:01:32 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack, int bool)
{
	int	*a;

	a = stack->a;
	if (a[0] == 0 && a[1] == 2 && a[2] == 1)
	{
		rra(stack, 1);
		sa(stack, 1);
	}
	else if (a[0] == 1 && a[1] == 2 && a[2] == 0)
		rra(stack, 1);
	else if (a[0] == 1 && a[1] == 0 && a[2] == 2)
		sa(stack, 1);
	else if (a[0] == 2 && a[1] == 1 && a[2] == 0)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (a[0] == 2 && a[1] == 0 && a[2] == 1)
		ra(stack, 1);
	if (bool == 0)
		exit_free(stack, 0);
}

void	sort_5(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->alen == 4)
	{
		while (stack->a[0] != 0)
			ra(stack , 1);
		pb(stack, 1);
		indexing(stack);
		sort_3(stack, 1);
		pa(stack, 1);
	}
	else if (stack->alen == 5)
	{
		while (i != 2)
		{
			if (stack->a[0] == 0 || stack->a[0] == 1)
			{
				pb(stack , 1);
				++i;
			}
			else
				ra(stack, 1);
		}
		if (stack->b[0] < stack->b[1])
			sb(stack, 1);
		indexing(stack);
		sort_3(stack, 1);
		pa(stack, 1);
		pa(stack, 1);
	}
}
