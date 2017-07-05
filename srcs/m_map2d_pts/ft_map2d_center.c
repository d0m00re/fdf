/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map2d_center.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:05:58 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:06:19 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_2d_pts_map.h"
#include "ft_renderer.h"
#include <stdlib.h>

void		ft_map2d_center(t_2d_pts_map *marie)
{
	t_point	*min;
	t_point	*max;
	t_point	*moove_value;

	max = ft_2d_pts_map_max_pts(marie);
	min = ft_2d_pts_map_min_pts(marie);
	moove_value = ft_pts_init(0, 0);
	moove_value->x = WIDTH / 2 - (max->x - min->x) / 2;
	moove_value->y = HEIGHT / 2 - (max->y - min->y) / 2;
	ft_map2d_moove(marie, moove_value);
	free(min);
	free(max);
	free(moove_value);
}
