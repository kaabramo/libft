/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:17:42 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 16:47:45 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	n = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-' )
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	n *= sign;
	return (n);
}
/*int main()
{
	char str[] = "   	-123";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}*/
