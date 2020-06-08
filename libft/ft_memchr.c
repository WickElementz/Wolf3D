/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:14:48 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:48:35 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char occ;

	str = (unsigned char *)s;
	occ = (unsigned char)c;
	while (n > 0)
	{
		if (*str == occ)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
