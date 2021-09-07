/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:30:53 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 21:14:41 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		strset(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	start;
	size_t			len;
	char			*s2;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (strset(s1[i], set) == 1)
		i++;
	if ((ft_strlen(s1) - i) == 0)
		return (ft_strdup(""));
	start = i;
	i = ft_strlen(s1) - 1;
	while (strset(s1[i], set) == 1)
		i--;
	len = i - start + 1;
	s2 = ft_substr(s1, start, len);
	return (s2);
}
