/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:23:26 by wting             #+#    #+#             */
/*   Updated: 2022/06/07 19:23:30 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	a = malloc(sizeof(char) * len + 1);
	if (!a)
		return (NULL);
	a[0] = '\0';
	if (start <= len)
	{
		while (i < len)
		{
			a[i] = s[start + i];
			++i;
		}
	}
	a[i] = '\0';
	return (a);
}
