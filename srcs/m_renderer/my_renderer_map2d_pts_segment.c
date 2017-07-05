/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_renderer_map2d_pts_segment.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 21:24:07 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 21:24:09 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "ft_ori.h"
#include "ft_renderer.h"
#include "ft_3d_pts.h"
#include "ft_map2d_pts.h"
#include "ft_2d_pts_map.h"
#include <stdlib.h>

void	my_renderer_segment_with_2d_pts(void *mlx, void *win,\
t_point *p1, t_point *p2)
{
	t_3d_pts *pts;
	t_3d_pts *pts2;

	pts = my_3d_pts_init(p1->x, p1->y, 0);
	pts2 = my_3d_pts_init(p2->x, p2->y, 0);
	my_renderer_segment(mlx, win, pts, pts2);
	free(pts);
	free(pts2);
}

void	my_renderer_map2d_pts_segment(void *mlx, void *win, t_2d_pts_map *map)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (y < map->y)
	{
		while (x < map->x)
		{
			if (x + 1 < map->x)
				my_renderer_segment_with_2d_pts\
(mlx, win, &(map->map[y][x]), &(map->map[y][x + 1]));
			if (y + 1 < map->y)
				my_renderer_segment_with_2d_pts\
(mlx, win, &(map->map[y][x]), &(map->map[y + 1][x]));
			x++;
		}
		x = 0;
		y++;
	}
}
