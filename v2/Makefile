NAME=so_long
#CDEBUG = -g3 -fsanitize=address
CDEBUG = -g3
CFLAGS=-Wall -Wextra -Werror ${CDEBUG}
CLINUX_FLAGS=-L/usr/X11/lib -lXext -lX11 -lm -lz
CMAC_FLAGS=-framework OpenGL -framework AppKit


SRC_DIR=./src
OBJ_DIR=./obj
INC_DIR=./inc

LIBFT_DIR=./libft
LIBFT_INC_DIR=${LIBFT_DIR}/inc
LIBFT_LIB=${LIBFT_DIR}/libft.a

SRC_FILES=	so_long.c	\
			ft_handler_no_event.c	\
			ft_handler_keypress.c	\
			ft_handler_destroy.c	\
			ft_handler_render.c		\
			ft_mlx_wrapper_init.c	\
			ft_mlx_wrapper_destroy.c	\
			ft_mlx_wrapper_hooks.c	\
			ft_mlx_wrapper_func.c	\
			ft_sprites.c			\
			ft_map.c				\
			ft_map_validations.c	\
			ft_map_validations2.c	\
			ft_game.c				\
			ft_player.c

UNAME = $(shell uname -s)

ifeq ($(UNAME), Linux)
	MLX_DIR=mlx_Linux
	MLX_LIB=mlx_Linux
	LINK_FLAGS=${CLINUX_FLAGS}
	SO_FLAG=-D LINUX=1
endif

ifeq ($(UNAME), Darwin)
#	Properties for Linux
#	LEAKS =  valgrind --leak-check=full --show-leak-kinds=all -s -q 
	MLX_DIR=mlx_Mac
#	MLX_LIB=$(MLX_DIR)/libmlx.dylib
	MLX_LIB=mlx
	LMLX = -lmlx -framework OpenGL -framework AppKit
	LINK_FLAGS=${CMAC_FLAGS}
	SO_FLAG=-D MAC=2
endif

OBJ_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.o)
DEP_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.d)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(MLX_LIB) ${LIBFT_LIB} $(OBJ_FILES) 
#	cc $(OBJ_FILES) -Lmlx_Linux -lmlx_Linux -L/usr/lib -Imlx_Linux -lXext -lX11 -lm -lz -o $(NAME)
	cc ${OBJ_FILES} -L${MLX_DIR} -l${MLX_LIB} -I./${MLX_DIR} ${LINK_FLAGS}  -o ${NAME} ${LIBFT_LIB}


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile
		cc $(CFLAGS) ${SO_FLAG} -I/usr/include -I./${MLX_DIR} -I${INC_DIR} -I${LIBFT_INC_DIR} -O3 -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(MLX_LIB):
	make -C $(MLX_DIR)

${LIBFT_LIB}:
	make -C ${LIBFT_DIR}

clean:
	rm -f $(OBJ_DIR)/*.o
	rm -f $(OBJ_DIR)/*.d
	make clean -C $(MLX_DIR) 
#	make clean -C ${LIBFT_DIR}

fclean: clean
	rm -f $(NAME)
#	make fclean  -C ${MLX_DIR}
#	make fclean  -C ${LIBFT_DIR}

re: fclean all

-include $(DEP_FILES)

.PHONY: all clean fclean re