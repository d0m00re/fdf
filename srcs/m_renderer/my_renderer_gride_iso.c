/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_renderer_gride_iso.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:12:46 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:12:57 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "ft_ori.h"
#include "ft_3d_pts.h"
#include "ft_point.h"
#include "ft_renderer.h"
#include <stdlib.h>

void			my_renderer_gride_iso(void *mlx, void *win,\
t_point *begin, t_point *dim)
{
	t_3d_pts	*pts;

	pts = my_3d_pts_init(begin->x, begin->y, 0);
	while (((pts->y - begin->y) / HEIGHT_TILE) < dim->y)
	{
		while ((pts->x - begin->x) / WIDTH_TILE < dim->x)
		{
			my_renderer_carry_iso(mlx, win, pts);
			pts->x += WIDTH_TILE;
		}
		pts->x = begin->x;
		pts->y += HEIGHT_TILE;
	}
	free(pts);
}
