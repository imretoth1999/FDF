/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_usage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:42:31 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:51:16 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_show_usage(t_env *m)
{
	mlx_string_put(m->mlx, m->win, 10, 10, 0xFFFFFF, "How to use:");
	mlx_string_put(m->mlx, m->win, 10, 30, 0xFFFFFF,
			"Directional keys to move");
	mlx_string_put(m->mlx, m->win, 10, 50, 0xFFFFFF, "Zoom: Home/End");
	mlx_string_put(m->mlx, m->win, 10, 70, 0xFFFFFF, "Height: PageUp/PageDown");
	mlx_string_put(m->mlx, m->win, 10, 110, 0xFFFFFF, "Projection type : p");
	mlx_string_put(m->mlx, m->win, 10, 130, 0xFFFFFF, "Exit: Esc");
}
