/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:39:01 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 18:10:38 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lenlen(long n)
{
	int slen;

	slen = 0;
	if (n < 0)
	{
		n = n * -1;
		slen++;
	}
	if (n > 0)
	{
		while (n != 0)
		{
			n = n / 10;
			slen++;
		}
	}
	return (slen);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		temp;

	len = lenlen(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	temp = len;
	while (n)
	{
		str[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	str[temp] = '\0';
	return (str);
}
