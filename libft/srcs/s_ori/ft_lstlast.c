/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:43:37 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/09 00:44:52 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

t_list	*ft_lstlast(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	if (!list)
		return (0);
	while (list->next)
		list = list->next;
	return (list);
}
