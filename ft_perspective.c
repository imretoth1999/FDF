/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perspective.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:27:37 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:37:31 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rotate(t_env *m, int keycode)
{
	int i;
	int j;

	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->columns)
		{
			if (keycode == 114)
			{
				m->map3[i][j].x = m->map3[i][j].x;
				m->map3[i][j].y = m->map3[i][j].y;
			}
			if (keycode == 117)
			{
				m->map3[i][j].x = m->map3[i][j].x;
				m->map3[i][j].y = m->map3[i][j].y;
			}
			j++;
		}
		i++;
	}
}

void	ft_rotate_45(t_point *point, float radians)
{
	float		c;
	float		s;
	float		xp;
	float		yp;

	c = cos(radians);
	s = sin(radians);
	xp = point->y * c - point->z * s;
	yp = point->y * s + point->z * c;
	point->y = xp;
	point->z = yp;
}

int		ft_number(void)
{
	static int i = 0;

	i++;
	return (i);
}

t_point	**ft_perspective(t_env *m)
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
			if (ft_number() <= m->rows * m->columns)
				ft_rotate_45(&m->map3[i][j], 0.785);
			matrix[i][j].x = WIDTH / 2 + m->spacing * (m->map3[i][j].x + (m->
			map3[i][j].z * m->map3[i][j].x) / (m->eye.z - m->map3[i][j].z));
			matrix[i][j].y = HEIGHT / 2 + m->spacing * (m->map3[i][j].y + (m->
			map3[i][j].z * m->map3[i][j].y) / (m->eye.z - m->map3[i][j].z));
			matrix[i][j].z = m->map3[i][j].z;
			j++;
		}
		i++;
	}
	return (matrix);
}
