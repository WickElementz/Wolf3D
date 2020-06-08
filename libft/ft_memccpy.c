/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:50:25 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:48:30 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*bdst;
	unsigned char	*bsrc;

	bdst = (unsigned char *)dst;
	bsrc = (unsigned char *)src;
	while (n > 0 && *bsrc != (unsigned char)c)
	{
		*bdst = *bsrc;
		bsrc++;
		bdst++;
		n--;
	}
	if (n > 0)
	{
		*bdst = *bsrc;
		bdst++;
		return (bdst);
	}
	else
		return (NULL);
}
