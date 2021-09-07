/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:44:39 by laddie            #+#    #+#             */
/*   Updated: 2020/11/14 14:03:01 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			n;

	i = 0;
	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (len == 0 || n <= start)
		return (ft_strdup(""));
	if ((ft_strlen(s + start)) < len)
		len = ft_strlen(s + start);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
