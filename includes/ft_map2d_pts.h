/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map2d_pts.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:03:48 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:04:21 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP2D_PTS_H
# define FT_MAP2D_PTS_H

# include "ft_2d_pts_map.h"
# include "ft_point.h"
# include "ft_fdf.h"

void	ft_2d_pts_map_init_value_iso\
(t_manage *manage);

/*
** deplace les point en fonction du pts passer + x et + y
*/
void	ft_map2d_moove(t_2d_pts_map *marie, t_point *pts);

void	ft_map2d_center(t_2d_pts_map *marie);

#endif
