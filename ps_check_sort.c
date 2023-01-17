/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:32:51 by wting             #+#    #+#             */
/*   Updated: 2023/01/17 22:30:13 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_stack *stack, int bool)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = INT_MIN;
	while (++i < stack->alen)
	{
		if (tmp > stack->a[i])
			return (0);
		tmp = stack->a[i];
	}
	if (stack->blen != 0)
		return (0);
	exit_free(stack, bool);
	return (0);
}
