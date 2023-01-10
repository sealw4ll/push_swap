/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:56:40 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 23:04:15 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_string(char *av, t_stack *stack)
{
	char	**ret;
	int		i;
	int		j;

	i = -1;
	ret = ft_split(av, ' ');
	while (ret[++i])
		stack->alen += 1;
	stack->a = malloc(sizeof(int) * stack->alen);
	stack->b = malloc(sizeof(int) * stack->alen);
	i = -1;
	while (++i < stack->alen)
	{
		if (ret[i][0] == '\0')
			exit_free(stack, 1);
		stack->a[i] = ft_atoi(ret[i]);
		j = i;
		while (--j >= 0)
		{
			if (stack->a[i] == stack->a[j])
				exit_free(stack, 1);
		}
	}
	free (ret);
}

void	parse_arr(char **av, t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	stack->a = malloc(sizeof(int) * stack->alen);
	stack->b = malloc(sizeof(int) * stack->alen);
	while (++i < stack->alen)
	{
		if (av[i + 1][0] == '\0')
			exit_free(stack, 1);
		stack->a[i] = ft_atoi(av[i + 1]);
		j = i;
		while (--j >= 0)
		{
			if (stack->a[i] == stack->a[j])
				exit_free(stack, 1);
		}
	}
}
