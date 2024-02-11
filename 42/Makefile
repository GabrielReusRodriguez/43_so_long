NAME=so_long
CFLAGS=-Wall -Wextra -Werror
CDEBUG = #-g3 -fsanitize=address

SRC_DIR=./src
OBJ_DIR=./obj

SRC_FILES=	so_long.c
UNAME = $(shell uname -s)

ifeq ($(UNAME), Linux)
#	Properties for Linux
#	LEAKS =  valgrind --leak-check=full --show-leak-kinds=all -s -q 
	MLX_DIR=./mlx_Linux
	MLX_LIB=$(MLX_DIR)/libmlx_Linux.a
endif

ifeq ($(UNAME), Mac)
#	Properties for Linux
#	LEAKS =  valgrind --leak-check=full --show-leak-kinds=all -s -q 
	MLX_DIR=./mlx_Mac
	MLX_LIB=$(MLX_DIR)/libmlx_Mac.a
	LMLX = -lmlx -framework OpenGL -framework AppKit
endif


OBJ_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.o)
DEP_FILES=$(SRC_FILES:%.c=$(OBJ_DIR)/%.d)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(MLX_LIB) $(OBJ_FILES) 
	cc $(OBJ_FILES) -Lmlx_Linux -lmlx_Linux -L/usr/lib -Imlx_Linux -lXext -lX11 -lm -lz -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile
	cc $(CFLAGS) -I/usr/include -Imlx_Linux -O3 -c $< -o $@

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