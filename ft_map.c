/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:47:40 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:47:42 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_row(char *str)
{
	char	**temp_map;
	int		j;

	temp_map = ft_strsplit(str, ' ');
	j = 0;
	while (temp_map[j])
		j++;
	return (j);
}

int		**ft_map(char **cmap, t_env *m)
{
	int		i;
	int		j;
	int		**map;
	char	**temp_map;

	map = (int**)malloc(sizeof(int*) * m->rows);
	m->columns = ft_row(cmap[0]);
	i = 0;
	while (cmap[i])
	{
		map[i] = (int*)malloc(sizeof(int) * m->columns);
		temp_map = ft_strsplit(cmap[i], ' ');
		j = 0;
		while (temp_map[j])
		{
			map[i][j] = ft_atoi(temp_map[j]);
			j++;
		}
		free(temp_map);
		if (j != m->columns)
			ft_invalid();
		i++;
	}
	return (map);
}
