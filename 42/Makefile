NAME=so_long
#CDEBUG = -g3 -fsanitize=address
CDEBUG = -g3
CFLAGS=-Wall -Wextra -Werror ${CDEBUG}


SRC_DIR=./src
OBJ_DIR=./obj
INC_DIR=./inc

SRC_FILES=	so_long.c	\
			ft_mlx_wrapper_init.c	\
			ft_mlx_wrapper_destroy.c	\
			ft_mlx_wrapper_hooks.c	\
			ft_handler_no_event.c	\
			ft_handler_keypress.c	\
			ft_handler_destroy.c	\
			ft_handler_render.c		\
			ft_sprites.c			\
			ft_map.c

UNAME = $(shell uname -s)

ifeq ($(UNAME), Linux)
#	Properties for Linux
#	LEAKS =  valgrind --leak-check=full --show-leak-kinds=all -s -q 
	MLX_DIR=mlx_Linux
	MLX_LIB=$(MLX_DIR)/libmlx_Linux.a
	SO_FLAG= -D OS=LINUX
endif

ifeq ($(UNAME), Mac)
#	Properties for Linux
#	LEAKS =  valgrind --leak-check=full --show-leak-kinds=all -s -q 
	MLX_DIR=./mlx_Mac
	MLX_LIB=$(MLX_DIR)/libmlx_Mac.a
	LMLX = -lmlx -framework OpenGL -framework AppKit
	SO_FLAG= -D OS=MACft_handler_render.c
endif

OBJ_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.o)
DEP_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.d)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(MLX_LIB) $(OBJ_FILES) 
#	cc $(OBJ_FILES) -Lmlx_Linux -lmlx_Linux -L/usr/lib -Imlx_Linux -lXext -lX11 -lm -lz -o $(NAME)
	cc $(OBJ_FILES)  -L${MLX_DIR} -l${MLX_DIR} -L/usr/lib -I${MLX_DIR} -lXext -lX11 -lm -lz -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile
#	cc $(CFLAGS) -I/usr/include -Imlx_Linux -O3 -c $< -o $@
	cc $(CFLAGS) ${SO_FLAG} -I/usr/include -I${MLX_DIR} -I${INC_DIR} -O3 -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(MLX_LIB):
	make -C $(MLX_DIR)

clean:
	rm -f $(OBJ_DIR)/*.o
	rm -f $(OBJ_DIR)/*.d
	make clean -C $(MLX_DIR) 

fclean: clean
	rm -f $(NAME)
-include $(DEP_FILES)

.PHONY: all clean fclean re