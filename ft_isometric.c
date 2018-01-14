/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:45:46 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:45:49 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_point	**ft_isometric(t_env *m)
{
	t_point	**matrix;
	int		i;
	int		j;

	matrix = (t_point**)malloc(sizeof(*matrix) * m->rows);
	i = 0;
	while (i < m->rows)
	{
		matrix[i] = (t_point*)malloc(sizeof(t_point) * m->columns);
		j = 0;
		while (j < m->columns)
		{
			matrix[i][j].x = WIDTH / 2 + m->map2[i][j].x * m->spacing *
				cos(DEG30) - m->map2[i][j].y * m->spacing * cos(DEG30);
			matrix[i][j].y = HEIGHT / 2 + m->map2[i][j].x * m->spacing *
				sin(DEG30) + m->map2[i][j].y * m->spacing * sin(DEG30) -
				m->map2[i][j].z * m->spacing;
			matrix[i][j].z = m->map2[i][j].z;
			j++;
		}
		i++;
	}
	return (matrix);
}
