/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:07:15 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 20:09:19 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dst);
	if (len >= dstsize)
		return (ft_strlen(src) + dstsize);
	if (i < dstsize)
	{
		while (i < dstsize - len - 1 && src[i])
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	return (len + ft_strlen(src));
}
