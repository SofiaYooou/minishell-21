/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:47:02 by laddie            #+#    #+#             */
/*   Updated: 2020/11/14 13:39:24 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num(char const *s, char c)
{
	unsigned int	i;
	int				word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

static char	**free_mas(char **mas, int i)
{
	while (i >= 0)
	{
		free(mas[i]);
		i--;
	}
	free(mas);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		k;
	char	**mas;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	mas = (char**)malloc(sizeof(char *) * (num(s, c) + 1));
	if (!mas)
		return (NULL);
	while (k < num(s, c))
	{
		while (s[i] == c)
			i++;
		x = i;
		while (s[i] != c && s[i])
			i++;
		if (!(mas[k] = ft_substr(s, x, i - x)))
			return (free_mas(mas, k));
		k++;
	}
	mas[num(s, c)] = 0;
	return (mas);
}
