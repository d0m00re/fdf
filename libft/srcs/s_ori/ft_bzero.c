/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:29:22 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/04 17:29:58 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*str;

	count = 0;
	str = (char *)s;
	while (count < n)
	{
		str[count] = 0;
		count++;
	}
}
