/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 14:29:55 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:51:47 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wlen(const char *s, char c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	return (j);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	if (!s || !(res = (char**)malloc(sizeof(char*) * (ft_countword(s, c) + 1))))
		return (0);
	i = 0;
	j = 0;
	while (i < ft_countword(s, c))
	{
		k = 0;
		if (!(res[i] = ft_strnew(wlen(&s[j], c) + 1)))
			res[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			res[i][k++] = s[j++];
		res[i][k] = '\0';
		i++;
	}
	res[i] = 0;
	return (res);
}
