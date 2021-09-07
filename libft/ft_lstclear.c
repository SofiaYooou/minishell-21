/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laddie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:49:25 by laddie            #+#    #+#             */
/*   Updated: 2020/11/11 19:08:28 by laddie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*res;

	if (!lst)
		return ;
	while (*lst)
	{
		res = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = res;
	}
}
