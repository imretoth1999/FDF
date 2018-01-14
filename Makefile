NAME = fdf

SRCS = main.c ft_centermap.c ft_color.c ft_control_height.c ft_coordinates.c ft_draw_line.c ft_expose_hook.c ft_getzminmax.c ft_init.c ft_isometric.c ft_key_hook.c ft_map.c ft_move.c ft_perspective.c ft_readmap.c ft_show_usage.c ft_unite.c ft_verifmap.c ft_zoom.c get_next_line.c  

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	gcc -Wall -Werror -Wextra -I libft/includes/ -c $(SRCS)
	gcc -o $(NAME) $(OBJ) -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

clean:
	/bin/rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft/libft.a

re: fclean all
