/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:49:25 by wting             #+#    #+#             */
/*   Updated: 2022/06/06 12:25:20 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*copy;

	if (!lst)
		return ;
	copy = *lst;
	while (copy != NULL)
	{
		tmp = copy;
		copy = copy->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
