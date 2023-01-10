/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:34:03 by wting             #+#    #+#             */
/*   Updated: 2022/06/07 19:27:47 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = ft_strlen(dst);
	if (dstsize < dlen + 1)
		return (dstsize + ft_strlen(src));
	while (i < (dstsize - dlen - 1) && src[i])
	{
		dst[i + dlen] = src[i];
		++i;
	}
	dst[i + dlen] = '\0';
	return (dlen + ft_strlen(src));
}
