/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:10:38 by wting             #+#    #+#             */
/*   Updated: 2023/02/08 00:18:15 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	int		neg;
	long	total;

	total = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		++str;
	}
	if (*str == '-' || *str == '+')
		return ((long)(neg * 2147483649));
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + (*str - '0');
		++str;
	}
	return ((long)(neg * total));
}
