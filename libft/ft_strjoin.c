/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:52:37 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:18:34 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
/*{
	size_t	buff;
	size_t	a;

	a = (ft_strlen(s1) + ft_strlen(s2));
	buff = (size_t)malloc ((a + 1) * sizeof(char));
	if (!buff)
		return(NULL);
	else
		return((char *)ft_strlcat((char *)s1, (char *)s2, buff));
}*/
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1, (size_t)str);
	ft_strlcat(str, (char *)s2, (size_t)str);
	return (str);
}
