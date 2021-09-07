/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:03:16 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 16:30:08 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	t1 = (unsigned char*)s1;
	t2 = (unsigned char*)s2;
	i = -1;
	while (++i < n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
	}
	return (0);
}
