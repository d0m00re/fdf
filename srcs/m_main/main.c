/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 21:16:31 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 21:21:24 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <mlx.h>
#include "ft_ori.h"
#include "ft_2d_tab_int.h"
#include "ft_3d_pts.h"
#include "ft_parser.h"
#include "ft_renderer.h"
#include "ft_2d_pts_map.h"
#include "ft_map2d_pts.h"
#include <stdlib.h>
#include "ft_fdf.h"

static void		modifier_param(int keycode, t_manage *param)
{
	if (keycode == 123)
		param->pos->x -= 10;
	else if (keycode == 124)
		param->pos->x += 10;
	else if (keycode == 125)
		param->pos->y += 10;
	else if (keycode == 126)
		param->pos->y -= 10;
	else if (keycode == 69)
	{
		param->pos->y -= 1;
		param->scale += 0.1;
	}
	else if (keycode == 78)
		param->scale -= 0.1;
	else if (keycode == 88)
		param->height_3d += 1;
	else if (keycode == 85)
		param->height_3d -= 1;
	mlx_clear_window(param->mlx, param->win);
	ft_2d_pts_map_init_value_iso(param);
	my_renderer_map2d_pts_segment(param->mlx, param->win, param->map);
}

static int		my_key_funct(int keycode, t_manage *param)
{
	if (keycode == 53)
	{
		mlx_destroy_window(param->mlx, param->win);
		exit(1);
	}
	if (keycode == 117)
		mlx_clear_window(param->mlx, param->win);
	if (keycode == 12)
		my_renderer_map2d_pts_segment(param->mlx, param->win, param->map);
	if ((keycode >= 123 && keycode <= 126) || keycode == 69 ||\
keycode == 78 || keycode == 88 || keycode == 85)
		modifier_param(keycode, param);
	else
		return (1);
	return (0);
}

static int		check_ext(char *str, char *ext)
{
	int size;
	int size2;
	int ret;
	int c;

	ret = 1;
	c = 0;
	size = ft_strlen(str);
	size2 = ft_strlen(ext);
	if (size < size2)
		ret = 0;
	else
	{
		size -= size2;
		while (ext[c] && str[size + c] == ext[c])
			c++;
	}
	if (!(ret && c == size2))
	{
		ft_putstr_fd("* Error : invalid size check_ext\n", 2);
		return (0);
	}
	return (1);
}

int				main(int argc, char **argv)
{
	t_manage	*marie;
	t_point		*p;

	if (argc != 2)
		ft_usage("usage: [name].fdf");
	if (!ft_file_exist(argv[1]))
		return (0);
	if (!check_ext(argv[1], ".fdf"))
		ft_usage("usage: [name].fdf");
	p = ft_pts_init(WIDTH / 2, 0);
	marie = manage_init();
	if (!(marie->point_ori = main_parser(argv[1])))
		ft_usage("Error parsing ...\n");
	marie->mlx = mlx_init();
	marie->win_dim = ft_pts_init(WIDTH, HEIGHT);
	marie->tile_dim = ft_pts_init(WIDTH_TILE, HEIGHT_TILE);
	marie->pos = ft_pts_init(WIDTH / 2, 200);
	marie->win = mlx_new_window(marie->mlx,\
	marie->win_dim->x, marie->win_dim->y, argv[1]);
	marie->map = ft_2d_pts_map_init(marie->point_ori);
	ft_2d_pts_map_init_value_iso(marie);
	my_renderer_map2d_pts_segment(marie->mlx, marie->win, marie->map);
	mlx_key_hook(marie->win, my_key_funct, marie);
	mlx_loop(marie->mlx);
	return (1);
}
