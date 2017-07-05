/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_found_nb_value.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 14:28:13 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/03 14:28:24 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_int_found_nb_value(int *tab, int len, int value)
{
	int			c;
	int			nb;

	c = 0;
	nb = 0;
	while (c < len)
	{
		if (tab[c] == value)
			nb++;
		c++;
	}
	return (nb);
}
