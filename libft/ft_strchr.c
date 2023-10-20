/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:19:25 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:17:54 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)(&s[i]));
	else
		return (NULL);
}
/*int main()
{
	char string[6] = "abcde";
	int a;

	a = 'b';
	printf("%s\n", ft_strchr(string, a));
	printf("%s\n", strchr(string, a));
}*/
