/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map2d_moove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:09:14 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:09:16 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_2d_pts_map.h"

void	ft_map2d_moove(t_2d_pts_map *marie, t_point *pts)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < marie->y)
	{
		while (x < marie->x)
		{
			marie->map[y][x].x += pts->x;
			marie->map[y][x].y += pts->y;
			x++;
		}
		x = 0;
		y++;
	}
}
