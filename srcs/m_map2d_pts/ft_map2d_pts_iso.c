/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map2d_pts_iso.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:08:29 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:08:37 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map2d_pts.h"
#include "ft_renderer.h"
#include "ft_fdf.h"

void	ft_2d_pts_map_init_value_iso(t_manage *manage)
{
	int x;
	int y;
	int x_dim;
	int y_dim;

	x = 0;
	y = 0;
	x_dim = (int)((float)manage->tile_dim->x * manage->scale);
	y_dim = (int)((float)manage->tile_dim->y * manage->scale);
	while (y < manage->map->y)
	{
		while (x < manage->map->x)
		{
			manage->map->map[y][x].x =\
			manage->pos->x - y * x_dim + x * x_dim;
			manage->map->map[y][x].y =\
			manage->pos->y + (x + y) * y_dim -\
(manage->point_ori->tab[y][x] * manage->height_3d);
			x++;
		}
		x = 0;
		y++;
	}
}
