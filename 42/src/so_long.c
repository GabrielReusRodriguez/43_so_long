/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:14:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 12:17:33 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <X11/X.h>
#include <X11/keysym.h>
#include "ft_mlx_wrapper.h"
#include "ft_event_handlers.h"
#include "ft_game.h"


/*
#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>
#include <X11/X.h>
#include <X11/keysym.h>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 300

#define MLX_ERROR 1

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
}	t_data;

int	handle_no_event(void *data)
{
	data = data;
	// This function needs to exist, but it is useless for the moment 
	return (0);
}

int	handle_keypress(int keysym, t_data *data)
{
	data = data;
	if (keysym == XK_Escape)
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);

	printf("Keypress: %d\n", keysym);
	return (0);
}

int	handle_keyrelease(int keysym, void *data)
{
	data = data;
	printf("Keyrelease: %d\n", keysym);
	return (0);
}

int	main(void)
{
	t_data	data;

	data.mlx_ptr = mlx_init();
	if (data.mlx_ptr == NULL)
		return (MLX_ERROR);
	data.win_ptr = mlx_new_window(data.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "My first window!");
	if (data.win_ptr == NULL)
	{
		free(data.win_ptr);
		return (MLX_ERROR);
	}

	// Setup hooks 
	mlx_loop_hook(data.mlx_ptr, &handle_no_event, &data);
	mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &handle_keypress, &data); // ADDED 
	mlx_hook(data.win_ptr, KeyRelease, KeyReleaseMask, &handle_keyrelease, &data); // CHANGED 

	mlx_loop(data.mlx_ptr);

	// we will exit the loop if there's no window left, and execute this code 
	mlx_destroy_display(data.mlx_ptr);
	free(data.mlx_ptr);
}
*/
/*
#include <X11/X.h>
#include <X11/keysym.h>

int	handle_keypress(int keysym, t_mlx *data)
{
	data = data;
	if (keysym == XK_Escape)
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);

	printf("Keypress: %d\n", keysym);
	return (0);
}

int	handle_keyrelease(int keysym, void *data)
{
	data = data;
	printf("Keyrelease: %d\n", keysym);
	return (0);
}
*/

int main(int argc, char **argv)
{
	t_game	game;

	argc = argc;
	argv= argv;

	game.mlx = ft_mlx_new();
	if (ft_mlx_init(&game.mlx) == NULL)
	{
		ft_mlx_free(&game.mlx);
		return (1);
	}
	printf("init\n");
	
	if (ft_mlx_create_window(&game.mlx) == NULL)
	{
		ft_mlx_free(&game.mlx);
		return (1);
	}
	printf("new window\n");
	ft_mlx_hook_functions(&game);
	//mlx_hook(mlx.win_ptr, KeyPress, KeyPressMask, &handle_keypress, &mlx); // ADDED 
	//mlx_hook(mlx.win_ptr, KeyRelease, KeyReleaseMask, &handle_keyrelease, &mlx); // CHANGED 
	//mlx_key_hook(mlx.win_ptr, &ft_handler_keypress, &mlx);

	//mlx_hook(mlx.win_ptr, KeyPress, KeyPressMask, &ft_handler_keypress, &mlx); // ADDED 
	printf("JAJAJ\n");
	mlx_loop(game.mlx.mlx_ptr);
	ft_mlx_destroy_display(&game.mlx);
	ft_game_destroy(&game);
	return (0);
}
