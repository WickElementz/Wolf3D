/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:04:03 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:48:16 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*maillon;

	if (!(maillon = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		maillon->content = NULL;
		maillon->content_size = 0;
	}
	else
	{
		maillon->content = (void *)malloc(sizeof(char) * (content_size));
		if (!maillon->content)
		{
			free(maillon);
			return (NULL);
		}
		maillon->content_size = content_size;
		maillon->content = ft_memcpy(maillon->content, content, content_size);
	}
	maillon->next = NULL;
	return (maillon);
}
