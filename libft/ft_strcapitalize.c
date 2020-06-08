/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:08:28 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:50:09 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		ft_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (!(c >= 'A' && c <= 'Z'))
	{
		if (!(c >= 'a' && c <= 'z'))
			return (0);
	}
	return (1);
}

static char		*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char			*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ft_alphanum(str[i - 1]) == 0)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
