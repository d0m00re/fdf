/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parser2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 21:30:37 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 21:30:38 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_2d_tab_int.h"

static void			manage_gnl_error(char *name_file, char **str)
{
	char			*line;
	int				c;
	int				nb_line;
	int				fd;

	c = 0;
	line = 0;
	nb_line = ft_file_nb_line(name_file);
	while (c < nb_line)
	{
		if ((fd = open(name_file, O_RDONLY)) == -1)
			return ;
		c = 0;
		while (get_next_line(fd, &line) > 0)
		{
			str[c] = ft_strdup(line);
			ft_strdel(&line);
			c++;
		}
		close(fd);
	}
	str[c] = 0;
}

static char			**extract_file(char *name_file)
{
	char			**str;
	int				fd;
	int				nb_line;

	nb_line = ft_file_nb_line(name_file);
	if (!(str = malloc(sizeof(char *) * (nb_line + 1))))
		return (0);
	manage_gnl_error(name_file, str);
	return (str);
}

t_2d_tab_int		*main_parser(char *name_file)
{
	char			**str;
	t_2d_tab_int	*tab;
	int				y;
	int				x;

	str = extract_file(name_file);
	y = ft_file_nb_line(name_file);
	x = ft_nb_word(str[0]);
	tab = ft_2d_tab_int_init(y, x);
	ft_2d_tab_int_split_all_line(tab, str);
	ft_2d_tab_int_tostring(tab);
	return (tab);
}
