/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:59:37 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 16:47:59 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
}
/*void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	while (n-- > 0)
		*ptr++ = 0;
}*/

/*int main()
{
	char *buff = malloc(30);

	ft_bzero(buff, 30);
}
*/
