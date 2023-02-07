/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:29:43 by wting             #+#    #+#             */
/*   Updated: 2023/02/08 00:57:40 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac == 1)
		exit(0);
	stack.alen = 0;
	stack.blen = 0;
	error_parse(ac, av, &stack);
	indexing(&stack);
	check_sorted(&stack, 0);
	if (stack.alen == 2)
		sa(&stack, 1);
	else if (stack.alen == 3)
		sort_3(&stack, 0);
	else if (stack.alen <= 5)
		sort_5(&stack);
	else
		ps_radixsort(&stack);
}
