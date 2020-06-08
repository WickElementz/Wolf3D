/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:15:08 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:51:40 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ndl, size_t n)
{
	unsigned int i;
	unsigned int o;

	if (ndl[0] == '\0')
		return ((char*)str);
	i = 0;
	while (((char*)str)[i])
	{
		if (str[i] == ndl[0])
		{
			o = 1;
			while (ndl[o] && str[i + o] == ndl[o])
				o++;
			if (ndl[o] == '\0')
			{
				if (i + o > n)
					return (NULL);
				else
					return (&((char*)str)[i]);
			}
		}
		i++;
	}
	return (NULL);
}
