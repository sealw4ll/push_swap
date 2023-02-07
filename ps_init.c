/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:44:15 by wting             #+#    #+#             */
/*   Updated: 2023/02/07 23:00:35 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void just_testing_bro(t_stack *stack)
{
	int i;
	t_stack *stack;
	stack->a = malloc(1000);
	stack->b = malloc (1000);
	stack->alen = 5;
	stack->blen = 5;
	stack->a[0] = 1;
	stack->a[1] = 2;
	stack->a[2] = 3;
	stack->a[3] = 4;
	stack->a[4] = 5;
	stack->b[0] = 7;
	stack->b[1] = 8;
	stack->b[2] = 9;
	stack->b[3] = 10;
	stack->b[4] = 11;

	rr(stack);
	i = -1;
	printf("stack a: ");
	while(++i < stack->alen)
		printf("%d ", stack->a[i]);
	i = -1;
	printf("\nstack b: ");
	while(++i < stack->blen)
		printf("%d ", stack->b[i]);
	printf("\n");

	// rra(stack);
	// i = -1;
	// printf("stack a: ");
	// while(++i < stack->alen)
	// 	printf("%d ", stack->a[i]);
	// i = -1;
	// printf("\nstack b: ");
	// while(++i < stack->blen)
	// 	printf("%d ", stack->b[i]);
	// printf("\n");
	return ;
}*/

void	init_vars(t_stack *stack)
{
	stack->a = malloc(sizeof(int) * stack->alen);
	stack->b = malloc(sizeof(int) * stack->alen);
}

void	error_parse_2(char **av, t_stack *stack)
{
	int	i;

	i = 0;
	while (av[++i])
	{
		if (!num_check(av[i]))
			quick_exit();
		stack->alen += 1;
	}
	parse_arr(av, stack);
}

void	error_parse(int ac, char **av, t_stack *stack)
{
	int	i;

	i = 0;
	if (ac == 1 || !av)
		quick_exit();
	if (ac == 2)
	{
		while (av[1][++i])
		{
			if (av[1][i] != ' ' && !ft_isdigit(av[1][i]))
				quick_exit();
		}
		if (av[2])
			quick_exit();
		parse_string(av[1], stack);
	}
	else
		error_parse_2(av, stack);
}
