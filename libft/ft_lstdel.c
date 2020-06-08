/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 10:55:48 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:47:50 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *l;
	t_list *t;

	l = *alst;
	if (!alst || !del)
		return ;
	while (l)
	{
		t = l->next;
		del(l, l->content_size);
		l = t;
	}
	*alst = NULL;
}
