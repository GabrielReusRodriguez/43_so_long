/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper_hooks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:43:42 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 20:49:56 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <X11/X.h>
#include "ft_game.h"
#include "ft_event_handlers.h"
#include "ft_events.h"

void	ft_mlx_hook_functions(t_game *game)
{
	
	//mlx_loop_hook(game->mlx.mlx_ptr, &ft_handler_no_event, game->mlx);
	mlx_hook(game->mlx.win_ptr, KEY_PRESS_EVENT, KEY_PRESS_MASK, &ft_handler_keypress, game);
	mlx_hook(game->mlx.win_ptr, ON_DESTROY, MLX_DEFAULT_MASK, &ft_handler_destroy, game);
	mlx_loop_hook(game->mlx.mlx_ptr, &ft_handler_render, game);
}
