/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:50:00 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 16:53:11 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcc;

	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (dest == 0 && srcc == 0)
		return (NULL);
	while (n > i)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}
