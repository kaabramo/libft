/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:37:32 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:21:01 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
/*{
	unsigned	int	i;
	unsigned	char *substr;

	i = ft_strlen(s);
	while (len > 0)
	{
	if (start >= 0)
	{
		while !(s[start])
			i++;
	}
		else
			while !(s[start])
			i--;
	}
	return (ft_strlcpy(s[i++], substr, len));
	if (len < 0)
		return (NULL);
}*/
{
	char			*substr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
	{
		len = ft_strlen(&s[start]);
	}
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = *(s + start + i);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
