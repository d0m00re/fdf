/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_tab_int_split_all_line.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 23:59:08 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/16 23:59:14 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_2d_tab_int.h"
#include "ft_ori.h"

int		ft_2d_tab_int_split_all_line(t_2d_tab_int *tab, char **data)
{
	int y;

	y = 0;
	while (y < tab->y)
	{
		if ((ft_2d_tab_int_split_line(tab, y, data[y])) == 0)
			return (0);
		y++;
	}
	return (1);
}
