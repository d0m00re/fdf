/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 23:23:18 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/18 23:16:24 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H

# include "ft_2d_tab_int.h"
# include "ft_2d_pts_map.h"
# include <mlx.h>
# include "ft_point.h"

typedef struct		s_manage
{
	void			*mlx;
	void			*win;
	char			*name_win;
	t_point			*win_dim;
	t_point			*tile_dim;
	float			scale;
	unsigned int	height_3d;
	t_point			*pos;
	t_2d_tab_int	*point_ori;
	t_2d_pts_map	*map;
}					t_manage;

t_manage			*manage_init(void);

#endif
