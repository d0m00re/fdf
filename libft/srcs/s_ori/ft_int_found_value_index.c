/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_found_value_index.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 00:30:17 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/02 03:50:39 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_int_found_value_index(int *tab, int size, int value)
{
	int			c;

	c = 0;
	while (c < size)
	{
		if (tab[c] == value)
			return (c);
		c++;
	}
	return (0);
}
