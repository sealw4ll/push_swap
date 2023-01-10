/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:14:14 by wting             #+#    #+#             */
/*   Updated: 2023/01/09 17:03:57 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_swap(int *list, int i1, int i2)
{
	int	tmp;

	if (!list)
		return ;
	tmp = list[i1];
	list[i1] = list[i2];
	list[i2] = tmp;
}

int	num_check(char *str)
{
	int	ret;

	ret = 1;
	if (!str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			ret = 0;
		++str;
	}
	return (ret);
}
