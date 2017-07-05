/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_renderer_map2d_pts.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:14:22 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:14:23 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "ft_ori.h"
#include "ft_renderer.h"
#include "ft_3d_pts.h"
#include "ft_map2d_pts.h"
#include "ft_2d_pts_map.h"

void	my_renderer_map2d_pts(void *mlx, void *win, t_2d_pts_map *map)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (y < map->y)
	{
		while (x < map->x)
		{
			my_renderer_point(mlx, win, &(map->map[y][x]), 0x0FFFFFF);
			x++;
		}
		x = 0;
		y++;
	}
}
