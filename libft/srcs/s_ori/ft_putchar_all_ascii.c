/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_all_ascii.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:55:39 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/02 16:55:43 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_putchar_all_ascii(unsigned char c)
{
	if (c < 128)
		ft_putchar_uc(c);
	else if (c < 255)
	{
		ft_putchar_uc((c >> 6) + 192);
		ft_putchar_uc((c & 63) + 128);
	}
}
