/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:57:02 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 17:03:12 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	size_t	len;

	st = (char *)s;
	len = ft_strlen(s) + 1;
	if ((char)c == '\0')
		return (st + len - 1);
	while (len--)
	{
		if (st[len] == c)
			return (st + len);
	}
	return (NULL);
}
