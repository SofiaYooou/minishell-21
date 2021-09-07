/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:06:09 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 17:09:43 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		if (!s1[i] && !s2[i])
			return (0);
		if (s1[i] != s2[i])
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		i++;
		n--;
	}
	return (0);
}
