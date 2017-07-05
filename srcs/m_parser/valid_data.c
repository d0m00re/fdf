/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:39:27 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 21:28:40 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

static int	valid_value(char ***str)
{
	int		x;
	int		y;
	int		ret;

	x = 0;
	y = 0;
	ret = 1;
	while (str[y])
	{
		while (str[y][x])
		{
			ft_str_delete_after_and_sep(str[y][x], ',');
			if (ft_strlen(str[y][x]) != 0 && !ft_is_base10(str[y][x]))
			{
				ft_putendl2_fd("Error element invalid :", str[y][x], 2);
				ret = 0;
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (ret);
}

int			valid_data(char ***str)
{
	int		x;
	int		y;
	int		x_max;
	int		ret;

	x = 0;
	y = 0;
	ret = 1;
	x_max = -1;
	while (str[y])
	{
		while (str[y][x])
			x++;
		if (x_max != -1 && x_max != x)
			ret--;
		x_max = x;
		x = 0;
		y++;
	}
	if (!valid_value(str))
		return (0);
	return (1);
}
