/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_exist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:01:23 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/15 13:01:32 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_ori.h"

int	ft_file_exist(char *name)
{
	int fd;

	if (!name)
		return (0);
	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putendl2_fd("file not exist : ", name, 2);
		return (0);
	}
	close(fd);
	return (1);
}
