/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expose_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:55:01 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:59:27 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_expose_hook(t_env *m)
{
	int		i;
	int		j;
	t_point	**matrix;

	if (m->projection_type == 'i')
		matrix = ft_isometric(m);
	else
		matrix = ft_perspective(m);
	m->zmin = ft_get_zmin(matrix, m);
	m->zmax = ft_get_zmax(matrix, m);
	mlx_clear_window(m->mlx, m->win);
	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j++ < m->columns)
		{
			mlx_pixel_put(m->mlx, m->win, matrix[i][j].x, matrix[i][j].y,
					ft_color(m, matrix[i][j]));
		}
		i++;
	}
	ft_unite(matrix, m);
	ft_show_usage(m);
	return (0);
}
