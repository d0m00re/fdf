/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:52:17 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/10 22:32:29 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

t_point			*ft_pts_init(int x, int y);

t_point			*ft_2dint_found_pos_value(int **tab, int y,\
		int x, int to_found);

int				ft_pts_get_x(t_point *pts);

int				ft_pts_get_y(t_point *pts);

void			ft_pts_set_x_y(t_point *pts, int x, int y);

void			ft_pts_set_x(t_point *pts, int x);

void			ft_pts_set_y(t_point *pts, int y);

int				ft_pts_is_adj(t_point *pts1, t_point *pts2);

void			ft_pts_to_string(t_point *pts);

void			ft_pts_tostring_fd(t_point *pts, int fd);

void			ft_pts_destruct(t_point **pts);

#endif
