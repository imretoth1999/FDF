/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:41:10 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:41:12 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_zoom(t_env *m, int keycode)
{
	if (keycode == 115)
		m->spacing *= 1.2;
	if (keycode == 119)
		m->spacing /= 1.2;
}

void	ft_change_color(t_env *m, int keycode)
{
	if (keycode == 15)
		m->color = 'r';
	if (keycode == 5)
		m->color = 'g';
	if (keycode == 11)
		m->color = 'b';
}
