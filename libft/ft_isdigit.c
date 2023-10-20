/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:31:51 by katabram          #+#    #+#             */
/*   Updated: 2023/09/27 18:19:24 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
*/
int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}
/*int main (void)
{
	printf ( "%c\n", ft_isdigit('7'));
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
	int result = ft_isdigit(argv[1][0]);
	printf("result: %c\n", result);
	}
	if (argc != 2)
		write(2, "ERROR\n",  6); 
}*/
