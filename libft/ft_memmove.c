/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:54:25 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:49:04 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*bsrc;
	unsigned char	*bdest;

	bsrc = (unsigned char *)src;
	bdest = (unsigned char *)dest;
	if (bsrc > bdest)
	{
		while (n > 0)
		{
			*bdest++ = *bsrc++;
			n--;
		}
	}
	else
	{
		bsrc = bsrc + n - 1;
		bdest = bdest + n - 1;
		while (n > 0)
		{
			*bdest-- = *bsrc--;
			n--;
		}
	}
	return (dest);
}
