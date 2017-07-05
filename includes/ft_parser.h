/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:03:31 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/17 21:31:22 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSER_H
# define FT_PARSER_H

# include "ft_ori.h"
# include "ft_2d_tab_int.h"

t_2d_tab_int	*main_parser(char *name_file);

/*
** 1 : valid data : 0 : invalid data input
*/
int				valid_data(char ***str);

#endif
