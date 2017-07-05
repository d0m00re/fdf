/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_isordon.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:41:52 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/01 18:42:20 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int		ft_int_isordon(int *tab, int len)
{
	int	type;

	type = ft_int_issort(&tab[1], len - 1);
	if (type == 1 && tab[0] > tab[len - 1])
		type = 1;
	else if (type == 2 && tab[0] < tab[len - 1])
		type = 2;
	else
		type = 0;
	return (type);
}
