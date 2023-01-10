/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:09:23 by wting             #+#    #+#             */
/*   Updated: 2023/01/10 21:10:39 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		++s;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*ret;
	size_t	i;

	i = 0;
	ret = malloc(sizeof(char) * (gnl_strlen(s1) + gnl_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	while (s1 && *s1)
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

size_t	gnl_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*gnl_strdup(char *s1)
{
	char	*a;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	a = malloc(gnl_strlen(s1) + 1);
	if (!a)
		return (0);
	while (s1[i])
	{
		a[i] = s1[i];
		++i;
	}
	a[i] = '\0';
	return (a);
}
