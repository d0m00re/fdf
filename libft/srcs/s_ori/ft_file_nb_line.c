/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_nb_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 23:59:58 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 00:00:12 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <fcntl.h>
#include <unistd.h>

unsigned int		ft_file_nb_line(char *name_file)
{
	unsigned int	nb;
	int				fd;
	char			*line;

	nb = 0;
	line = 0;
	if ((fd = open(name_file, O_RDONLY)) == -1)
		return (0);
	while (get_next_line(fd, &line) > 0)
	{
		nb++;
		ft_strdel(&line);
	}
	close(fd);
	return (nb);
}
