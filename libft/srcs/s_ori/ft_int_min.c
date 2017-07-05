/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/26 22:31:59 by alhelson          #+#    #+#             */
/*   Updated: 2017/02/26 22:32:01 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int	ft_int_min(int *tab, int len)
{
	int count;
	int min;

	count = 1;
	min = tab[0];
	while (count < len - 1)
	{
		min = ft_min(min, tab[count + 1]);
		count++;
	}
	return (min);
}
