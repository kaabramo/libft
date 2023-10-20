/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:01:23 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:18:48 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	dlen = i;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (dlen == dstsize)
		return (dstsize + slen);
	i = 0;
	while (src[i] && (dlen + i + 1) < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*int main()
{
	char s1[4] = "Try";
	char s2[1] = "1";
	size_t  buff = 4;

	printf( "%zu\n", ft_strlcat(s1, s2, buff));
	printf("%zu\n", strlcat(s1, s2, buff));
	printf("%s\n", s1);
}*/
