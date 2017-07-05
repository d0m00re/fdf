/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_renderer_point.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:14:33 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:14:34 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "ft_point.h"

void	my_renderer_point(void *mlx, void *win, t_point *pts, int color)
{
	mlx_pixel_put(mlx, win, pts->x, pts->y, color);
}
