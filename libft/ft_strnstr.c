/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:18:42 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 20:21:33 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (!needle[y])
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		while (needle[y] && (i + y) < len)
		{
			if (needle[y] != haystack[i + y])
				break ;
			y++;
		}
		if (!needle[y])
			return ((char*)(&haystack[i]));
		y = 0;
		i++;
	}
	return (0);
}
