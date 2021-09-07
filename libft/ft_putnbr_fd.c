/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 22:09:38 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 18:18:29 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int tmp;

	tmp = 1;
	while ((n = n / 10))
		tmp = tmp * 10;
	return (tmp);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		ten;
	char	str;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n >= 0)
	{
		ten = len(n);
		while (ten)
		{
			str = n / ten + '0';
			write(fd, &str, 1);
			n = n % ten;
			ten = ten / 10;
		}
	}
}
