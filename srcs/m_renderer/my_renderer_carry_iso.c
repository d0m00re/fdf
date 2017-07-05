/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_renderer_carry_iso.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:13:27 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:13:44 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "ft_ori.h"
#include "ft_renderer.h"
#include "ft_3d_pts.h"

void			my_renderer_carry_iso(void *mlx, void *win, t_3d_pts *pts)
{
	t_3d_pts	*p1;
	t_3d_pts	*p2;
	t_3d_pts	*p3;
	t_3d_pts	*p4;

	p1 = my_3d_pts_init(pts->x + WIDTH_TILE / 2, pts->y, 0);
	p2 = my_3d_pts_init(pts->x + WIDTH_TILE, pts->y + HEIGHT_TILE / 2, 0);
	p3 = my_3d_pts_init(pts->x + WIDTH_TILE / 2, pts->y + HEIGHT_TILE, 0);
	p4 = my_3d_pts_init(pts->x, pts->y + HEIGHT_TILE / 2, 0);
	my_renderer_segment(mlx, win, p1, p2);
	my_renderer_segment(mlx, win, p2, p3);
	my_renderer_segment(mlx, win, p3, p4);
	my_renderer_segment(mlx, win, p4, p1);
	my_3d_pts_destroy(&p1);
	my_3d_pts_destroy(&p2);
	my_3d_pts_destroy(&p3);
	my_3d_pts_destroy(&p4);
}
