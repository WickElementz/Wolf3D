/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videloff <videloff@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:15:08 by videloff          #+#    #+#             */
/*   Updated: 2020/06/04 14:50:03 by videloff         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int sqr;
	int res;

	sqr = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	while (sqr * sqr <= nb)
	{
		res = sqr * sqr;
		if (res == nb)
			return (sqr);
		sqr++;
	}
	return (sqr);
}
