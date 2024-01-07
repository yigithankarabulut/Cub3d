NAME = cub3D
CC = gcc -Wall -Wextra -Werror
SOURCES = 	src/main.c \
			src/draw/drawmain.c \
			src/draw/drawutils.c \
			src/events/events.c \
			src/events/move.c \
			src/init/map/importxmp.c \
			src/init/map/mapcheck.c \
			src/init/map/mapgenerate.c \
			src/init/initialize.c \
			src/init/playerinit.c \
			src/raycast/2draycast.c \
			src/raycast/loopstart.c \
			src/utils/abs.c \
			src/utils/eventutils.c \
			src/utils/moveutils.c \
			src/utils/raycastutils.c \
			src/libft/gnl/get_next_line_utils.c \
			src/libft/gnl/get_next_line.c \
			src/libft/myfuncts/ft_isspace.c \
			src/libft/myfuncts/ft_strndup.c \
			src/libft/myfuncts/ft_strrcmp.c \
			src/libft/ft_atoi.c \
			src/libft/ft_calloc.c \
			src/libft/ft_split.c \
			src/libft/ft_strchr.c \
			src/libft/ft_strlen.c \
			src/libft/ft_strncmp.c \
			src/libft/ft_strnstr.c \
			src/libft/ft_bzero.c \
			src/libft/ft_substr.c \
			src/libft/ft_strdup.c \
			src/libft/ft_strlcpy.c 
	


OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
CFLAGS =  -Iinclude -Iminilibx-macos -Isrc/libft 
MLX = libmlx.a -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJECTS) run_mlx
	$(CC) $(OBJECTS) $(CFLAGS) $(MLX) -o $(NAME)

run_mlx: run_libft
	cd minilibx-macos && $(MAKE) re
	mv minilibx-macos/libmlx.a ./

run_libft:
	cd src/libft && $(MAKE) re
	mv src/libft/libft.a ./

clean:
	rm -f $(OBJECTS)
	cd minilibx-macos && $(MAKE) clean
	cd src/libft && $(MAKE) fclean

fclean: clean
	rm -rf libft.a
	rm -rf libmlx.a
	rm -rf $(NAME)

re: fclean all
