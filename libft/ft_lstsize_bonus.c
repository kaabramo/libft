/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:57:31 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:31:38 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	printf("%d\n", ft_lstsize(head));
}*/
