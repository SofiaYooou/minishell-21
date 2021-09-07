/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:50:49 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 16:47:11 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	if (!((unsigned char*)dst) && !((unsigned char*)src))
		return (0);
	if (((unsigned char*)dst) > ((unsigned char*)src))
	{
		i = len - 1;
		while (i >= 0)
		{
			(((unsigned char*)dst)[i]) = (((unsigned char*)src)[i]);
			i--;
		}
	}
	else
	{
		while (len > 0)
		{
			(((unsigned char*)dst)[i]) = (((unsigned char*)src)[i]);
			i++;
			len--;
		}
	}
	return (dst);
}
