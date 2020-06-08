/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:36:09 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:48:49 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*bdst;
	unsigned char	*bsrc;

	i = 0;
	bdst = (unsigned char *)dst;
	bsrc = (unsigned char *)src;
	while (n > 0)
	{
		bdst[i] = bsrc[i];
		i++;
		n--;
	}
	return (bdst);
}
