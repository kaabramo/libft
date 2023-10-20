/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:45:16 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:31:09 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main()
{
	t_list	*head;
	t_list	*head2;

	head = NULL;
	head2 = NULL;
	head = ft_lstnew(ft_strdup("head"));
	head2 = ft_lstnew(ft_strdup("head2"));
	ft_lstadd_front(&head, head2);
	printf("%s\n", (char  *)ft_lstlast(head));
}*/
