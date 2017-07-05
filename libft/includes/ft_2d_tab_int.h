/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_tab_int.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 22:46:29 by alhelson          #+#    #+#             */
/*   Updated: 2017/03/15 22:47:03 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_2D_TAB_INT_H
# define FT_2D_TAB_INT_H

typedef struct	s_2d_tab_int
{
	int			x;
	int			y;
	int			**tab;
}				t_2d_tab_int;

t_2d_tab_int	*ft_2d_tab_int_init(int y, int x);

/*
** si 0 error
** si 1 good
*/
int				ft_2d_tab_int_split_line(t_2d_tab_int *tab, int y, char *line);

int				ft_2d_tab_int_split_all_line(t_2d_tab_int *tab, char **data);

void			ft_2d_tab_int_tostring(t_2d_tab_int *tab);

void			ft_2d_tab_int_destroy(t_2d_tab_int **tab);

#endif
