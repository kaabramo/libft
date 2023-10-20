/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:28:30 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:19:59 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i + j < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0' && i + j < len)
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main (void)
{
    char s1[]={"dimeholacomovas"};
    char s2[]={"hola"};
    printf("%s", ft_strnstr(s1,s2,20));
}*/
