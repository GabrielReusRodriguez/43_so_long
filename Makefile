NAME=so_long
#CDEBUG = -g3 -fsanitize=address
#CDEBUG = -g3
CFLAGS=-Wall -Wextra -Werror -MMD -MP ${CDEBUG}
CLINUX_FLAGS=-L/usr/X11/lib -lXext -lX11 -lm -lz
CMAC_FLAGS=-framework OpenGL -framework AppKit


BONUS_DIR=./src_bonus
INC_BONUS_DIR=./inc_bonus

SRC_DIR=./src
INC_DIR=./inc

OBJ_DIR=./obj

LIBFT_DIR=./libft
LIBFT_INC_DIR=${LIBFT_DIR}/inc
LIBFT_LIB=${LIBFT_DIR}/libft.a

#ft_handler_no_event.c	
SRC_FILES=	so_long.c	\
			ft_bfs.c				\
			ft_bfs_utilities.c		\
			ft_error.c				\
			ft_exit.c				\
			ft_game.c				\
			ft_game2.c				\
			ft_geometry2d.c			\
			ft_handler_keypress.c	\
			ft_handler_destroy.c	\
			ft_handler_render.c		\
			ft_map.c				\
			ft_map2.c				\
			ft_map_validations.c	\
			ft_map_validations2.c	\
			ft_mlx_wrapper_destroy.c	\
			ft_mlx_wrapper_draw.c	\
			ft_mlx_wrapper_func.c	\
			ft_mlx_wrapper_hooks.c	\
			ft_mlx_wrapper_init.c	\
			ft_pathfinding.c		\
			ft_player.c				\
			ft_sprites.c			

SRC_BONUS_FILES=	so_long_bonus.c	\
					ft_bfs_bonus.c				\
					ft_bfs_utilities_bonus.c		\
					ft_error_bonus.c				\
					ft_exit_bonus.c				\
					ft_game_bonus.c				\
					ft_game2_bonus.c				\
					ft_geometry2d_bonus.c			\
					ft_handler_keypress_bonus.c	\
					ft_handler_destroy_bonus.c	\
					ft_handler_render_bonus.c		\
					ft_map_bonus.c				\
					ft_map2_bonus.c				\
					ft_map_validations_bonus.c	\
					ft_map_validations2_bonus.c	\
					ft_mlx_wrapper_destroy_bonus.c	\
					ft_mlx_wrapper_draw_bonus.c	\
					ft_mlx_wrapper_func_bonus.c	\
					ft_mlx_wrapper_hooks_bonus.c	\
					ft_mlx_wrapper_init_bonus.c	\
					ft_pathfinding_bonus.c		\
					ft_player_bonus.c				\
					ft_sprites_bonus.c			


MLX_DIR=mlx_GL
#MLX_DIR=mlx
MLX_LIB=$(MLX_DIR)/libmlx.a
LMLX = -lmlx -framework OpenGL -framework AppKit
LINK_FLAGS=${CMAC_FLAGS}

OBJ_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.o)
DEP_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.d)

OBJ_BONUS_FILES=$(SRC_BONUS_FILES:%.c=$(OBJ_DIR)/%.o)
DEP_BONUS_FILES=$(SRC_BONUS_FILES:%.c=$(OBJ_DIR)/%.d)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(MLX_LIB) ${LIBFT_LIB} $(OBJ_FILES) 
	cc ${OBJ_FILES} -L${MLX_DIR} -lmlx -I./${MLX_DIR} ${LINK_FLAGS}  -o ${NAME} ${LIBFT_LIB}


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile
		cc $(CFLAGS) ${SO_FLAG} -I/usr/include -I./${MLX_DIR} -I${INC_DIR} -I${LIBFT_INC_DIR} -O3 -c $< -o $@

$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c Makefile
		cc $(CFLAGS) ${SO_FLAG} -I/usr/include -I./${MLX_DIR} -I${INC_BONUS_DIR} -I${LIBFT_INC_DIR} -O3 -c $< -o $@

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
	make clean -C ${LIBFT_DIR}
	rm -f ./bonus

fclean: clean
	make fclean -C ${LIBFT_DIR}
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ_DIR) $(MLX_LIB) ${LIBFT_LIB} ${OBJ_BONUS_FILES}
	cc ${OBJ_BONUS_FILES} -L${MLX_DIR} -lmlx -I./${MLX_DIR} ${LINK_FLAGS}  -o ${NAME} ${LIBFT_LIB}
	@touch bonus

-include $(DEP_FILES)
-include $(DEP_BONUS_FILES)

norminette:
	norminette ./inc
	norminette ./inc_bonus
	norminette ./src
	norminette ./src_bonus

.PHONY: all clean fclean re norminette