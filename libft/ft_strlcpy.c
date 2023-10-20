/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:49:28 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:19:02 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
/*{
	unsigned int		i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] != '\0' && (i < (dstsize)))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < ft_strlen(src))
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
	size_t	mem;

	mem = (unsigned long)ft_memcpy(dst, src, dstsize);
	return(ft_strlen(src));
}*/
{
	unsigned int	i;

	i = 0;
	if (!dstsize || !dst)
		return (ft_strlen(src));
	while (src[i] != '\0' && (i < (dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < ft_strlen(src))
		dst[dstsize - 1] = '\0';
	else if (dstsize != '\0')
		dst[i] = '\0';
	return (ft_strlen(src));
}
