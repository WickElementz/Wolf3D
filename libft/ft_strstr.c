/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 14:30:04 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:51:51 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *ndl)
{
	unsigned int i;
	unsigned int o;
	unsigned int len;

	i = 0;
	o = 0;
	len = 0;
	while (ndl[len])
		len++;
	if (len == 0)
		return (&((char *)str)[i]);
	while (str[i])
	{
		while (str[i + o] == ndl[o])
		{
			if (o == len - 1)
				return (&((char *)str)[i]);
			o++;
		}
		o = 0;
		i++;
	}
	return (NULL);
}
