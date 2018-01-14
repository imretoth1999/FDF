/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:40:05 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:40:20 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_1(t_env *m, int i, int j)
{
	m->map2[i][j].x -= 1;
	m->map3[i][j].y -= 1;
	m->map2[i][j].y -= 1;
}

void	ft_2(t_env *m, int i, int j)
{
	m->map2[i][j].x += 1;
	m->map2[i][j].y += 1;
	m->map3[i][j].y += 1;
}

void	ft_3(t_env *m, int i, int j)
{
	m->map2[i][j].x -= 1;
	m->map3[i][j].x -= 1;
	m->map2[i][j].y += 1;
}

void	ft_move(t_env *m, int keycode)
{
	int i;
	int j;

	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->columns)
		{
			if (keycode == 126)
				ft_1(m, i, j);
			if (keycode == 125)
				ft_2(m, i, j);
			if (keycode == 123)
				ft_3(m, i, j);
			if (keycode == 124)
			{
				m->map2[i][j].x += 1;
				m->map2[i][j].y -= 1;
				m->map3[i][j].x += 1;
			}
			j++;
		}
		i++;
	}
}
