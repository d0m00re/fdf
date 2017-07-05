/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_3d_pts_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:28:11 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/13 17:28:12 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_3d_pts.h"
#include <stdlib.h>

void	my_3d_pts_destroy(t_3d_pts **pts)
{
	if (!pts || !(pts[0]))
		return ;
	free(pts[0]);
	pts[0] = 0;
}