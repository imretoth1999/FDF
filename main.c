/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:40:38 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:40:41 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_invalid(void)
{
	ft_putstr("MAP ERROR! SORRY\n");
	exit(0);
}

int		main(int argc, char **argv)
{
	t_env *m;

	m = (t_env*)malloc(sizeof(*m));
	ft_init(m, argc, argv);
	ft_centermap(m);
	mlx_expose_hook(m->win, ft_expose_hook, m);
	mlx_key_hook(m->win, ft_key_hook, m);
	mlx_loop(m->mlx);
	return (0);
}
