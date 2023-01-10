/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:34:49 by wting             #+#    #+#             */
/*   Updated: 2022/06/07 16:13:10 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	a = malloc(count * size);
	if (!a)
		return (0);
	ft_bzero(a, (count * size));
	return (a);
}
