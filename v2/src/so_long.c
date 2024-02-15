/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:14:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 21:12:00 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_mlx_wrapper.h"
#include "ft_event_handlers.h"
#include "ft_game.h"


//int main(int argc, char **argv)
int main(void)
{
	t_game	game;

	game = ft_game_new();
	//game.mlx = ft_mlx_new();
	if (ft_mlx_init(&game.mlx) == NULL)
	{
		ft_mlx_free(&game.mlx);
		return (1);
	}
	if (ft_mlx_create_window(&game.mlx) == NULL)
	{
		ft_mlx_free(&game.mlx);
		return (1);
	}
	ft_mlx_hook_functions(&game);
	mlx_loop(game.mlx.mlx_ptr);
	return (0);
}
