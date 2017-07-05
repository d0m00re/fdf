/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1d_int_malloc_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:30:18 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/24 14:12:58 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_1d_int.h"

void	ft_1d_int_malloc_tab(t_1d_int **tab_1d)
{
	if ((*tab_1d)->len <= 0)
		return ;
	if (!((*tab_1d)->tab = malloc(sizeof(int) * (*tab_1d)->len)))
		return ;
}
