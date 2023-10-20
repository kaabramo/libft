/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:03:27 by katabram          #+#    #+#             */
/*   Updated: 2023/10/17 17:13:24 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "../functions/ft_strlen.c"
#include "../functions/ft_substr.c"
#include "../functions/ft_strdup.c"
#include "../functions/ft_memcpy.c"
#include "../functions/ft_calloc.c"
#include "../functions/ft_bzero.c"*/
#include <stdlib.h>
#include <stdio.h>

int	how_many_splits_bro_question_mark(const char *s, char c)
{
	int	i;
	int	nrows;

	i = 0;
	nrows = 0;
	while (s[i] && s)
	{
		if (s[i] != c)
		{
			nrows++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (nrows);
}

size_t	ft_len(const char *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
			i++;
	}
	return (size);
}
/*unsigned int	ft_start(const char *s,char c)
{
	unsigned int	i;
	unsigned int start;

	i = 0;
	start = how_many_splits_bro_question_mark(s , c);
	while (s[i])
	{
	while (start < i)
		i++;
	}
	return (start);
}*/

void	*ft_free(char **split, int j)
{
	while (j-- > 0)
		free(split[j]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		nrows;
	char	**split;
	int		ncols;
	int		i;
	int		j;

	i = 0;
	j = -1;
	nrows = how_many_splits_bro_question_mark(s, c);
	split = (char **)ft_calloc((nrows + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (++j < nrows)
	{
		while (s[i] == c)
			i++;
		ncols = ft_len(s + i, c);
		split[j] = ft_substr(s, i, ncols);
		if (!split[j])
			return (ft_free(split, j));
		i = ncols + i;
	}
	split[j] = 0;
	return (split);
}
/*int main(void)
{
	const char *s = "holaaaa";
	char c = 'b';
	printf("%zu\n",ft_split("hola   adios", ' '));
	printf("%zu\n", ft_len(s, c));
}*/
