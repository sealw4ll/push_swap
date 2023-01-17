/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_hardcode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:01:13 by wting             #+#    #+#             */
/*   Updated: 2023/01/17 22:45:29 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack)
{
	int	*a;

	a = stack->a;
	while (!check_sorted(stack, 0))
	{
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
		exit_free(stack, 0);
	}
}
