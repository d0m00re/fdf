/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pts_to_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 21:19:40 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/22 21:19:42 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include "ft_ori.h"

void	ft_pts_to_string(t_point *pts)
{
	ft_putstr("t_point[x:");
	ft_putnbr(ft_pts_get_x(pts));
	ft_putstr(";y:");
	ft_putnbr(ft_pts_get_y(pts));
	ft_putchar(']');
}
