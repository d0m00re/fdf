/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_g_error_set_error_with_id.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 08:28:30 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/24 13:49:44 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gestion_error.h"

void	ft_g_error_set_error_with_id(t_error **error2, int id, int error1)
{
	t_error *error;

	error = *error2;
	if (id < 0 || !error || !(ft_g_error_valid_id(error, id)))
		return ;
	(error[id]).error = error1;
}
