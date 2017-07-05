/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pts_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 21:16:18 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/24 13:52:40 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdlib.h>

t_point	*ft_pts_init(int x, int y)
{
	t_point *pts;

	if (!(pts = malloc(sizeof(t_point))))
		return (NULL);
	pts->x = x;
	pts->y = y;
	return (pts);
}
