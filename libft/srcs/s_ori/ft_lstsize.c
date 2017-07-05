/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:40:33 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/09 00:41:32 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int	ft_lstsize(t_list *begin_list)
{
	if (begin_list)
		return (ft_lstsize(begin_list->next) + 1);
	return (0);
}
