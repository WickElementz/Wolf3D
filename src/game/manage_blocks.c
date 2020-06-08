/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_blocks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jominodi <jominodi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:56:48 by videloff          #+#    #+#             */
/*   Updated: 2020/06/01 11:02:51 by jominodi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		walkable_block_x(double n[2], t_block map[50][50],
		t_pos *cam)
{
	if (n[0] + 2 <= 49 * 100 && n[0] - 2 >= 0)
		if ((map[(int)(n[1] - 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'W' &&
			map[(int)(n[1] + 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'W') &&
			(map[(int)(n[1] - 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'P' &&
			map[(int)(n[1] + 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'P') &&
			(map[(int)(n[1] - 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'D' &&
			map[(int)(n[1] + 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'D'))
			cam->x = n[1];
	if (n[1] + 2 <= 49 * 100 && n[1] - 2 >= 0)
		if ((map[(int)(cam->x) / BLOCK][(int)(n[0] - 2) / BLOCK].type != 'W' &&
			map[(int)(cam->x) / BLOCK][(int)(n[0] + 2) / BLOCK].type != 'W') &&
			(map[(int)(cam->x) / BLOCK][(int)(n[0] - 2) / BLOCK].type != 'P' &&
			map[(int)(cam->x) / BLOCK][(int)(n[0] + 2) / BLOCK].type != 'P') &&
			(map[(int)(cam->x) / BLOCK][(int)(n[0] - 2) / BLOCK].type != 'D' &&
			map[(int)(cam->x) / BLOCK][(int)(n[0] + 2) / BLOCK].type != 'D'))
			cam->y = n[0];
}

void		walkable_block_z(double n[2], t_block map[50][50],
		t_pos *cam)
{
	if (n[0] + 2 <= 49 * 100 && n[0] - 2 >= 0)
		if ((map[(int)(n[1] + 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'W' &&
			map[(int)(n[1] - 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'W') &&
			(map[(int)(n[1] + 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'P' &&
			map[(int)(n[1] - 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'P') &&
			(map[(int)(n[1] + 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'D' &&
			map[(int)(n[1] - 2) / BLOCK][(int)(cam->y) / BLOCK].type != 'D'))
			cam->x = n[1];
	if (n[1] + 2 <= 49 * 100 && n[1] - 2 >= 0)
		if ((map[(int)(cam->x) / BLOCK][(int)(n[0] + 2) / BLOCK].type != 'W' &&
			map[(int)(cam->x) / BLOCK][(int)(n[0] - 2) / BLOCK].type != 'W') &&
			(map[(int)(cam->x) / BLOCK][(int)(n[0] + 2) / BLOCK].type != 'P' &&
			map[(int)(cam->x) / BLOCK][(int)(n[0] - 2) / BLOCK].type != 'P') &&
			(map[(int)(cam->x) / BLOCK][(int)(n[0] + 2) / BLOCK].type != 'D' &&
			map[(int)(cam->x) / BLOCK][(int)(n[0] - 2) / BLOCK].type != 'D'))
			cam->y = n[0];
}
