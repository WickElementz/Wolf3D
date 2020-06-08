/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jominodi <jominodi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 11:00:59 by jominodi          #+#    #+#             */
/*   Updated: 2020/06/05 14:35:31 by jominodi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	door(t_env *env)
{
	if (env->map[env->door_x][env->door_y].id < 124)
		env->map[env->door_x][env->door_y].id += 1;
	else
	{
		env->map[env->door_x][env->door_y].type = 'F';
		env->door_id = 0;
	}
}

void	jump(t_env *env)
{
	static short i = 0;

	if (env->player.corona == 0)
	{
		if (i > 10)
			env->cam.z -= 3;
		else
			env->cam.z += 3;
		i++;
		if (env->cam.z == 32)
		{
			i = 0;
			env->jump = 0;
		}
	}
}

void	corona(t_env *env)
{
	clock_t	t;

	t = clock();
	if (env->coro_clock == 0 && (env->coro_clock = 1))
		env->t2 = t;
	if (env->t2 + 50000000 > t)
		env->sick = 1;
	else
	{
		env->player.corona = 0;
		env->sick = 0;
		env->coro_clock = 0;
		env->cam.z = 32.0000;
		gun(env, 0);
		print_hud(env, 0);
	}
}

void	crouch_animation(t_env *env)
{
	if (env->player.corona == 0)
	{
		if (env->crouch_id != 0)
			env->cam.speed = 3;
		if (env->cam.z > 17 && env->crouch_id == 1)
			env->cam.z -= 3;
		else if (env->cam.z < 32 && env->crouch_id == 2)
			env->cam.z += 3;
		else if (env->cam.z == 32 && env->crouch_id == 2)
		{
			env->cam.speed = 6;
			env->crouch_id = 0;
		}
	}
}
