/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:29:00 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 21:04:41 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!s2)
		return (0);
	while (len > 1)
	{
		s2[i] = s1[i];
		i++;
		len--;
	}
	s2[i] = '\0';
	return (s2);
}
