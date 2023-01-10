/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:44:44 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 23:04:52 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_free(t_stack *stack, int bool)
{
	if (bool == 0)
	{
		free (stack->a);
		free (stack->b);
		exit (0);
	}
	free (stack->a);
	free (stack->b);
	write(2, "Error\n", 6);
	exit (0);
}

void	quick_exit(t_stack *stack)
{
	write(2, "Error\n", 6);
	exit (0);
}
