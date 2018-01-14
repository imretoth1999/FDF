/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unite.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:41:38 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:41:40 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_unite(t_point **matrix, t_env *m)
{
	int i;
	int j;

	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->columns)
		{
			if (j < m->columns - 1)
				ft_draw_line(matrix[i][j], matrix[i][j + 1], m);
			if (i < m->rows - 1)
				ft_draw_line(matrix[i][j], matrix[i + 1][j], m);
			j++;
		}
		i++;
	}
}
