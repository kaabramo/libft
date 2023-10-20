/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:29:00 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:20:24 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	char			*p;

	p = 0;
	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == (unsigned char)c)
			p = (char *)(&s[len]);
		len++;
	}
	if (s[len] == (unsigned char)c)
		p = (char *)(&s[len]);
	return (p);
}
/*int	main()
{
	char string[10] = "abcdecab";
	int a;

	a = 'c';
	printf("%s\n", ft_strrchr(string, a));
	printf("%s\n", strrchr(string, a));
}*/
