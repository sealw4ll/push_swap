/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:56:40 by wting             #+#    #+#             */
/*   Updated: 2023/02/08 00:19:26 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid(char *str)
{
	if (ft_strlen(str) == 1 && (*str < '0' || *str > '9'))
		return (0);
	if (*str == '+' || *str == '-')
		++str;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		++str;
	}
	return (1);
}

static void	arr_free(char **str, int bool, t_stack *stack)
{
	char	**tmp;

	tmp = str;
	while (str && *str)
	{
		free(*str);
		str++;
	}
	free (tmp);
	if (bool == 1)
		exit_free(stack, 1);
}

void	check_limit(char **arr, t_stack *stack, int bool)
{
	char	**tmp;
	long	value;
	int		err;

	err = 0;
	tmp = arr;
	if (bool == 0)
		++arr;
	while (*arr)
	{
		err = check_valid(*arr);
		value = ft_atoi(*arr);
		if (value > 2147483647 || value < -2147483648 || err == 0)
		{
			if (bool == 1)
				arr_free(tmp, 1, stack);
			exit_free(stack, 1);
		}
		++arr;
	}
	arr = tmp;
}

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
	check_limit(ret, stack, 1);
	i = -1;
	while (++i < stack->alen)
	{
		if (ret[i][0] == '\0')
			arr_free(ret, 1, stack);
		stack->a[i] = ft_atoi(ret[i]);
		j = i;
		while (--j >= 0)
		{
			if (stack->a[i] == stack->a[j])
				arr_free(ret, 1, stack);
		}
	}
	arr_free (ret, 0, stack);
}

void	parse_arr(char **av, t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	stack->a = malloc(sizeof(int) * stack->alen);
	stack->b = malloc(sizeof(int) * stack->alen);
	check_limit(av, stack, 0);
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
