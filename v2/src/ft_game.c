/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:30:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 21:00:52 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"


t_game  ft_game_new()
{
	t_game	game;

	game.map = NULL;
	game.loaded_sprites = NULL;
	game.mlx = ft_mlx_new();
	game.player = ft_player_create();
	return (game);
}

void    ft_game_destroy(t_game  *game)
{
	ft_mlx_destroy(&game->mlx);
	ft_player_destroy(&game->player);
}
