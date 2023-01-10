/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:09:28 by wting             #+#    #+#             */
/*   Updated: 2022/06/04 16:58:46 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	ret = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (NULL);
	while (*s1)
	{
		ret[i] = *s1;
		++s1;
		++i;
	}
	while (*s2)
	{
		ret[i] = *s2;
		++s2;
		++i;
	}
	ret[i] = '\0';
	return (ret);
}
