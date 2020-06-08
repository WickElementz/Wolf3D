/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:11:03 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:51:54 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*trc;

	i = 0;
	if (!s)
		return (NULL);
	if (!(trc = ft_strnew(len)))
		return (NULL);
	while (s[start] && len > 0)
	{
		trc[i++] = s[start++];
		len--;
	}
	return (trc);
}
