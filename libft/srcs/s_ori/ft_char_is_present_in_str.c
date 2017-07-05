/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_is_present_in_str.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:34:27 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/01 18:34:33 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_char_is_present_in_str(char *str, char c)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
			return (str[count]);
		count++;
	}
	return ((char)0);
}
