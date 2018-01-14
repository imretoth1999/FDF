/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 19:01:07 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 19:01:58 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_color(t_env *m, t_point v)
{
	int red;
	int green;
	int blue;

	if (v.z == m->zmin || v.z < 0.00001)
		return (0xFFFFFF);
	red = v.z / (m->zmax) * 255;
	blue = (red << 16) + (red << 8);
	green = (red << 16) + red;
	red = (red << 8) + red;
	if (m->color == 'r')
		return (0xFFFFFF - red);
	if (m->color == 'b')
		return (0xFFFFFF - blue);
	return (0xFFFFFF - green);
}
