/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_height.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:57:57 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:57:58 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_control_height(t_env *m, int control)
{
	int i;
	int j;

	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->columns)
		{
			if (m->map2[i][j].z != 0 && control == 1)
				m->map2[i][j].z *= 2;
			if (m->map2[i][j].z != 0 && control == -1)
				m->map2[i][j].z /= 2;
			if (m->map3[i][j].z != 0 && control == 1)
				m->map3[i][j].z *= 2;
			if (m->map3[i][j].z != 0 && control == -1)
				m->map3[i][j].z /= 2;
			j++;
		}
		i++;
	}
}
