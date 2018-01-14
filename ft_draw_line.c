/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:54:27 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:54:29 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

float	ft_fabs(float a)
{
	if (a < 0)
		return (-a);
	return (a);
}

float	ft_fmax(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}

float	ft_fmin(float a, float b)
{
	if (a > b)
		return (b);
	return (a);
}

void	ft_draw_line(t_point v1, t_point v2, t_env *m)
{
	float	step;
	float	t;
	t_point	sum;

	t = 0;
	step = (float)(1 / (ft_fmax(ft_fabs(v1.x - v2.x), ft_fabs(v1.y - v2.y)) *
				2));
	while (t <= 1)
	{
		sum.x = v1.x + t * (v2.x - v1.x);
		sum.y = v1.y + t * (v2.y - v1.y);
		sum.z = v1.z + t * (v2.z - v1.z);
		mlx_pixel_put(m->mlx, m->win, sum.x, sum.y, ft_color(m, sum));
		t = t + step;
	}
}
