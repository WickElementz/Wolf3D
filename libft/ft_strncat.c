/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:47:27 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:51:19 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*bsrc;

	i = 0;
	j = 0;
	bsrc = (unsigned char *)src;
	while (dest[i])
		i++;
	while (bsrc[j] && n > 0)
	{
		if (!bsrc[j] || n == 0)
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i++] = bsrc[j++];
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
