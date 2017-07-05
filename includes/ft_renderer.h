/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_renderer.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 19:27:26 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/13 19:27:29 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RENDERER_H
# define FT_RENDERER_H

# include "ft_point.h"
# include "ft_3d_pts.h"
# include "ft_map2d_pts.h"

# define WIDTH_TILE 10
# define HEIGHT_TILE 5
# define WIDTH 3000
# define HEIGHT 1500

void	my_renderer_point(void *mlx, void *win, t_point *pts, int color);

void	my_renderer_line(void *mlx, void *win, t_3d_pts *pts, t_3d_pts *pts2);

void	my_renderer_segment\
(void *mlx, void *win, t_3d_pts *pts, t_3d_pts *pts2);

void	my_renderer_carry(void *mlx, void *win, t_3d_pts *pts);

void	my_renderer_carry_iso(void *mlx, void *win, t_3d_pts *pts);

/*
** begin : position begin
** dim : nb tile x and y
*/
void	my_renderer_gride(void *mlx, void *win, t_point *begin, t_point *dim);

void	my_rendrer_gride_iso\
(void *mlx, void *win, t_point *begin, t_point *dim);

void	my_renderer_map2d_pts(void *mlx, void *win, t_2d_pts_map *map);

void	my_renderer_map2d_pts_segment(void *mlx, void *win, t_2d_pts_map *map);

#endif
