/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_renderer_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:13:09 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:13:18 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "ft_ori.h"
#include "ft_3d_pts.h"
#include "ft_point.h"
#include "ft_renderer.h"
#include <stdlib.h>

void		my_renderer_line(void *mlx, void *win,\
t_3d_pts *pts, t_3d_pts *pts2)
{
	t_point *p;
	t_point *p2;

	p = ft_pts_init(0, 0);
	p2 = ft_pts_init(0, 0);
	p->x = ft_min(pts->x, pts2->x);
	p->y = ft_min(pts->y, pts2->y);
	p2->x = ft_max(pts->x, pts2->x);
	p2->y = ft_max(pts->y, pts2->y);
	if (pts->x != pts2->x)
		while (p->x <= p2->x)
		{
			my_renderer_point(mlx, win, p, 0x0FFFFFF);
			p->x += 1;
		}
	if (pts->y != pts2->y)
		while (p->y <= p2->y)
		{
			my_renderer_point(mlx, win, p, 0x0FFFFFF);
			p->y += 1;
		}
	free(p);
	free(p2);
}
