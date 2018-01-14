/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:47:03 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:51:50 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_execute_116_121(t_env *m, int n)
{
	ft_control_height(m, n);
	ft_expose_hook(m);
}

void	ft_change_projection_type(t_env *m)
{
	if (m->projection_type == 'i')
		m->projection_type = 'p';
	else
		m->projection_type = 'i';
	ft_expose_hook(m);
}

int		ft_key_hook(int keycode, t_env *m)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 35)
		ft_change_projection_type(m);
	if (keycode == 116)
		ft_execute_116_121(m, 1);
	if (keycode == 121)
		ft_execute_116_121(m, -1);
	if (keycode == 126 || keycode == 125 || keycode == 123 || keycode == 124)
	{
		ft_move(m, keycode);
		ft_expose_hook(m);
	}
	if (keycode == 115 || keycode == 119)
	{
		ft_zoom(m, keycode);
		ft_expose_hook(m);
	}
	if (keycode == 114 || keycode == 117)
	{
		ft_rotate(m, keycode);
		ft_expose_hook(m);
	}
	return (0);
}
