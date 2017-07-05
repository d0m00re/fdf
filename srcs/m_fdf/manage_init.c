/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 23:22:59 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/16 23:23:07 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"
#include <stdlib.h>
#include "ft_ori.h"

t_manage		*manage_init(void)
{
	t_manage	*m;

	if (!(m = malloc(sizeof(t_manage))))
		return (0);
	m->mlx = 0;
	m->win = 0;
	m->name_win = 0;
	m->win_dim = 0;
	m->tile_dim = 0;
	m->scale = 1.0;
	m->pos = 0;
	m->point_ori = 0;
	m->height_3d = 3;
	m->map = 0;
	return (m);
}
