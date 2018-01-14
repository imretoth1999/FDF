/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verifmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:19:11 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 18:19:15 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_verifline(char *str)
{
	int i;
	int ok;

	i = 0;
	ok = 0;
	while (str[i])
	{
		if (str[i] == '-')
			ok++;
		if (str[i] == ' ')
			ok--;
		i++;
	}
	if (ok > 1)
		ft_invalid();
}

void	ft_verifmap(char **cmap)
{
	int		i;
	int		j;
	int		k;
	char	**tmp;

	i = 0;
	while (cmap[i])
	{
		ft_verifline(cmap[i]);
		j = 0;
		tmp = ft_strsplit(cmap[i], ' ');
		while (tmp[j])
		{
			k = 0;
			while (tmp[j][k])
			{
				if (ft_isdigit(tmp[j][k]) || tmp[j][k] == '-')
					k++;
				else
					ft_invalid();
			}
			j++;
		}
		i++;
	}
}
