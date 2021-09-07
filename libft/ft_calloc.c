/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:29:09 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 19:18:52 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	res;
	char	*str;
	int		i;

	res = count * size;
	str = malloc(res);
	i = 0;
	if (!str)
		return (NULL);
	while (res--)
	{
		str[i] = 0;
		i++;
	}
	return ((void*)str);
}
