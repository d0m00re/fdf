/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/26 22:31:45 by alhelson          #+#    #+#             */
/*   Updated: 2017/02/26 22:31:55 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int		ft_int_max(int *tab, int len)
{
	int count;
	int max;

	count = 1;
	max = tab[0];
	while (count < len - 1)
	{
		max = ft_max(max, tab[count + 1]);
		count++;
	}
	return (max);
}
