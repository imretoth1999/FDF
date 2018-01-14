/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getzminmax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:55:59 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:56:11 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

float	ft_get_zmin(t_point **matrix, t_env *m)
{
	int		i;
	int		j;
	float	min;

	min = matrix[0][0].z;
	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->columns)
		{
			if (min > matrix[i][j].z)
				min = matrix[i][j].z;
			j++;
		}
		i++;
	}
	return (min);
}

float	ft_get_zmax(t_point **matrix, t_env *m)
{
	int		i;
	int		j;
	float	max;

	max = matrix[0][0].z;
	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->columns)
		{
			if (max < matrix[i][j].z)
				max = matrix[i][j].z;
			j++;
		}
		i++;
	}
	return (max);
}
