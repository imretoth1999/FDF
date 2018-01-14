/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:53:47 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:53:48 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_init(t_env *m, int argc, char **argv)
{
	char **cmap;

	if (argc != 2)
	{
		ft_putstr("INSTRUCTIONS: ./fdf filename\n SIMPLE\n");
		exit(0);
	}
	else
	{
		m->color = 'r';
		m->file = argv[1];
		m->mlx = mlx_init();
		m->win = mlx_new_window(m->mlx, WIDTH, HEIGHT, m->file);
		cmap = ft_readmap(m->file, m);
		ft_verifmap(cmap);
		m->map = ft_map(cmap, m);
		m->map2 = ft_coordinates(m);
		m->map3 = ft_coordinates(m);
		m->spacing = (WIDTH) / (m->columns + 70);
		m->eye.x = 0;
		m->eye.y = 0;
		m->eye.z = (WIDTH / 2) * tan(DEG15);
		m->projection_type = 'i';
	}
}
