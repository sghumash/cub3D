/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_camera.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <sghumash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:43:23 by sghumash          #+#    #+#             */
/*   Updated: 2024/03/10 14:43:24 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

void	rotate_right(t_data *c3d)
{
	c3d->olddirx = c3d->dirx;
	c3d->dirx = c3d->dirx * cos(-c3d->rotspeed) - c3d->diry * \
		sin(-c3d->rotspeed);
	c3d->diry = c3d->olddirx * sin(-c3d->rotspeed) + c3d->diry * \
		cos(-c3d->rotspeed);
	c3d->oldplanex = c3d->planex;
	c3d->planex = c3d->planex * cos(-c3d->rotspeed) - c3d->planey * \
		sin(-c3d->rotspeed);
	c3d->planey = c3d->oldplanex * sin(-c3d->rotspeed) + c3d->planey * \
		cos(-c3d->rotspeed);
	raycasting(c3d);
}

void	rotate_left(t_data *c3d)
{
	c3d->olddirx = c3d->dirx;
	c3d->dirx = c3d->dirx * cos(c3d->rotspeed) - c3d->diry * \
		sin(c3d->rotspeed);
	c3d->diry = c3d->olddirx * sin(c3d->rotspeed) + c3d->diry * \
		cos(c3d->rotspeed);
	c3d->oldplanex = c3d->planex;
	c3d->planex = c3d->planex * cos(c3d->rotspeed) - c3d->planey * \
		sin(c3d->rotspeed);
	c3d->planey = c3d->oldplanex * sin(c3d->rotspeed) + c3d->planey * \
		cos(c3d->rotspeed);
	raycasting(c3d);
}
