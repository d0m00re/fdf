/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 21:25:58 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 21:27:10 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_2d_tab_int.h"
#include "ft_parser.h"

static void			found_size_x_y(char ***tab, int *x, int *y)
{
	int c;
	int c2;
	int max;

	c = 0;
	c2 = 0;
	max = 0;
	*x = 0;
	*y = 0;
	while (tab[(*y)])
		(*y)++;
	while (tab[0][(*x)])
		(*x)++;
	max = *x;
	while (tab[c])
	{
		while (tab[c][c2])
			c2++;
		max = ft_max(max, c2);
		c2 = 0;
		c++;
	}
	*x = max;
}

static void			convert_value_str_tab(t_2d_tab_int *tab, char ***str)
{
	int				x;
	int				y;

	x = 0;
	y = 0;
	while (str[y])
	{
		while (str[y][x])
		{
			ft_str_delete_after_and_sep(str[y][x], ',');
			tab->tab[y][x] = ft_atoi(str[y][x]);
			x++;
		}
		while (x < tab->x)
		{
			tab->tab[y][x] = 0;
			x++;
		}
		x = 0;
		y++;
	}
}

static void			free_all_bibitch(char ****str)
{
	int				y;
	int				z;

	y = 0;
	z = 0;
	while (str[0][z])
	{
		while (str[0][z][y])
		{
			free(str[0][z][y]);
			y++;
		}
		free(str[0][z]);
		y = 0;
		z++;
	}
	free(str[0]);
	str[0] = 0;
}

t_2d_tab_int		*main_parser(char *name_file)
{
	char			***str;
	t_2d_tab_int	*tab;
	int				x;
	int				y;

	if (!(str = get_next_line_all(name_file)))
		return (0);
	if (!str || !valid_data(str))
	{
		ft_putstr_fd("* invalid file parsing\n", 2);
		exit(1);
	}
	found_size_x_y(str, &x, &y);
	tab = ft_2d_tab_int_init(y, x);
	convert_value_str_tab(tab, str);
	free_all_bibitch(&str);
	return (tab);
}
