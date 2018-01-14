/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 19:05:30 by itoth             #+#    #+#             */
/*   Updated: 2017/03/18 19:05:40 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include <mlx.h>
# include <math.h>
# include "get_next_line.h"
# define WIDTH 1000
# define HEIGHT 1000
# define DEG30 0.52398776
# define DEG15 0.261799388

typedef struct	s_point
{
	float		x;
	float		y;
	float		z;
}				t_point;

typedef struct	s_env
{
	void		*win;
	void		*mlx;
	char		*file;
	int			**map;
	t_point		**map2;
	t_point		**map3;
	int			columns;
	int			rows;
	float		spacing;
	float		zmin;
	float		zmax;
	int			color;
	t_point		eye;
	int			projection_type;
}				t_env;

void			ft_rotate_45(t_point *point, float radians);
void			ft_rotate(t_env *m, int keycode);
int				ft_expose_hook(t_env *m);
void			ft_invalid(void);
void			ft_print_int_map(t_env *m);
void			ft_print_cmap(char **cmap);
void			ft_print_struct_matrix(t_env *m);
int				ft_color(t_env *m, t_point v);
void			ft_control_height(t_env *m, int control);
void			ft_move(t_env *m, int keycode);
void			ft_zoom(t_env *m, int keycode);
void			ft_change_color(t_env *m, int keycode);
int				ft_key_hook(int keycode, t_env *m);
void			ft_draw_line(t_point v1, t_point v2, t_env *m);
float			ft_fmin(float a, float b);
float			ft_fmax(float a, float b);
float			ft_fabs(float a);
void			ft_unite(t_point **matrix, t_env *m);
t_point			**ft_isometric(t_env *m);
t_point			**ft_perspective(t_env *m);
float			ft_get_zmin(t_point **matrix, t_env *m);
float			ft_get_zmax(t_point **matrix, t_env *m);
void			ft_show_usage(t_env *m);
int				ft_expose_hook(t_env *m);
char			**ft_readmap(char *filename, t_env *m);
int				**ft_map(char **cmap, t_env *m);
t_point			**ft_coordinates(t_env *m);
void			ft_verifmap(char **cmap);
void			ft_init(t_env *m, int argc, char **argv);
void			ft_centermap(t_env *m);

#endif
