/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:58:14 by wting             #+#    #+#             */
/*   Updated: 2022/06/07 16:30:35 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	if (!len)
		return (0);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			if (ft_strlen(needle) <= len)
			{
				if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
					return ((char *)haystack);
			}
		}
		++haystack;
		--len;
	}
	return (NULL);
}
