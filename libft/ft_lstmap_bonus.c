/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:31:30 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:32:07 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*lstnew;
	void	*ptr;

	map = 0;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		ptr = (*f)(lst->content);
		lstnew = ft_lstnew(ptr);
		if (!lstnew)
		{
			free(ptr);
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, lstnew);
		lst = lst->next;
	}
	if (!map)
		return (NULL);
	else
		return (map);
}
