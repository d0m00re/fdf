/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_renderer_segment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:13:57 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:13:59 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "ft_ori.h"
#include "ft_3d_pts.h"
#include "ft_point.h"
#include "ft_renderer.h"
#include <stdlib.h>
#include <math.h>

/*
** poitnt du milieu :
** http://www.irem.univ-mrs.fr/IMG/pdf/Algos_trace_segment_draft_2_-2.pdf
** case one : Y1
** bottom right
** algo de bresenham
*/

void	ft_segment_case_one(void *mlx, void *win, t_point *d, t_point *pts)
{
	int cum;
	int i;
	int xinc;
	int yinc;

	xinc = (d->x > 0) ? 1 : -1;
	yinc = (d->y > 0) ? 1 : -1;
	d->x = ft_abs(d->x);
	d->y = ft_abs(d->y);
	cum = d->x / 2;
	i = 1;
	while (i <= d->x)
	{
		pts->x += xinc;
		cum += d->y;
		if (cum >= d->x)
		{
			cum -= d->x;
			pts->y += yinc;
		}
		my_renderer_point(mlx, win, pts, 0x0FFFFFF);
		i++;
	}
}

void	ft_segment_case_two(void *mlx, void *win, t_point *d, t_point *pts)
{
	int cum;
	int i;
	int xinc;
	int yinc;

	xinc = (d->x > 0) ? 1 : -1;
	yinc = (d->y > 0) ? 1 : -1;
	d->x = ft_abs(d->x);
	d->y = ft_abs(d->y);
	cum = d->y / 2;
	i = 1;
	while (i <= d->y)
	{
		pts->y += yinc;
		cum += d->x;
		if (cum >= d->y)
		{
			cum -= d->y;
			pts->x += xinc;
		}
		my_renderer_point(mlx, win, pts, 0x0FFFFFF);
		i++;
	}
}

void	my_renderer_segment(void *mlx, void *win, t_3d_pts *pts, t_3d_pts *pts2)
{
	t_point *p;
	t_point *p2;

	if (pts->x > pts2->x)
	{
		my_renderer_segment(mlx, win, pts2, pts);
		return ;
	}
	p = ft_pts_init(pts->x, pts->y);
	p2 = ft_pts_init(pts->x, pts->y);
	my_renderer_point(mlx, win, p, 0x0FFFFFF);
	p->x = pts2->x - pts->x;
	p->y = pts2->y - pts->y;
	if (ft_abs(p->x) > ft_abs(p->y))
		ft_segment_case_one(mlx, win, p, p2);
	else
		ft_segment_case_two(mlx, win, p, p2);
	free(p);
	free(p2);
}
