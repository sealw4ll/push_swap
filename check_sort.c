/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:32:51 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 23:05:04 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorted(t_stack *stack)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = stack->a[0] - 1;
	while (++i < stack->alen)
	{
		if (tmp > stack->a[i])
			return ;
		tmp = stack->a[i];
	}
	if (stack->blen)
		return ;
	write(1, "OK\n", 3);
	exit_free(stack, 0);
}
