/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:30:22 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 16:49:37 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int	i;

	str = NULL;
	while (str[i] != '\0')
	{
	if (n < 0)
	{
		str[0] = '-';
		len = ft_numlen(n) + 1;
	}
	else
	{
		str[0] = 0;
		len = ft_numlen(n);
	}
	str = malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return(str);
}
int main ()
{
	printf("%s\n", ft_itoa(1));
}*/
size_t	ft_numlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_numlen(n);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[len--] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[len--] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
