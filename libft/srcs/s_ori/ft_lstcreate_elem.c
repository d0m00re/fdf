/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate_elem.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:30:23 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/09 00:34:17 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

t_list	*ft_lstcreate_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (0);
	elem->next = NULL;
	elem->content = data;
	return (elem);
}
