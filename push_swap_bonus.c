/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:19:18 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 23:08:53 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./GNL/get_next_line.h"

void	run_func(char *tmp, t_stack *stack)
{
	if (!ft_strncmp(tmp, "sa\n", ft_strlen(tmp)))
		sa(stack);
	else if (!ft_strncmp(tmp, "sb\n", ft_strlen(tmp)))
		sb(stack);
	else if (!ft_strncmp(tmp, "ss\n", ft_strlen(tmp)))
		ss(stack);
	else if (!ft_strncmp(tmp, "pa\n", ft_strlen(tmp)))
		pa(stack);
	else if (!ft_strncmp(tmp, "pb\n", ft_strlen(tmp)))
		pb(stack);
	else if (!ft_strncmp(tmp, "ra\n", ft_strlen(tmp)))
		ra(stack);
	else if (!ft_strncmp(tmp, "rb\n", ft_strlen(tmp)))
		rb(stack);
	else if (!ft_strncmp(tmp, "rr\n", ft_strlen(tmp)))
		rr(stack);
	else if (!ft_strncmp(tmp, "rra\n", ft_strlen(tmp)))
		rra(stack);
	else if (!ft_strncmp(tmp, "rrb\n", ft_strlen(tmp)))
		rrb(stack);
	else if (!ft_strncmp(tmp, "rrr\n", ft_strlen(tmp)))
		rrr(stack);
	else if (ft_strncmp(tmp, "\n", ft_strlen(tmp)))
		exit_free(stack, 1);
}
	// int i = -1;
	// while (++i < stack->alen)
	// 	printf("stack a [ %d ]: %d\n", i, stack->a[i]);
	// printf("------------------\n");
	// i = -1;
	// while (++i < stack->blen)
	// 	printf("stack b [ %d ]: %d\n", i, stack->b[i]);

void	read_input(t_stack *stack)
{
	char	*tmp;

	while (1)
	{
		tmp = get_next_line(0);
		run_func(tmp, stack);
		check_sorted(stack);
		if (!ft_strncmp(tmp, "\n", ft_strlen(tmp)))
		{
			write(1, "KO\n", 3);
			exit_free(stack, 0);
		}
	}
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac == 1)
		return (0);
	stack.alen = 0;
	stack.blen = 0;
	error_parse(ac, av, &stack);
	check_sorted(&stack);
	read_input(&stack);
}
