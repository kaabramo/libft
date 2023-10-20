/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:29:42 by katabram          #+#    #+#             */
/*   Updated: 2023/10/20 10:07:48 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*#include "ft_memcpy.c"
#include "ft_strlen.c"*/

char	*ft_strdup(const char *s1)
{
	char			*i;
	unsigned int	len;

	len = ft_strlen(s1) + 1;
	i = malloc(sizeof(char) * len);
	if (!i)
		return (NULL);
	i = ft_memcpy(i, s1, len);
	return (i);
}

/*int main()
{
	const char *str = "abcde";

	printf("%p\n", str);
	printf("%p\n", strdup(str));
	printf("%p\n", str);
	printf("%p\n", ft_strdup(str));
}*/
