/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper_hooks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:43:42 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 12:11:56 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <X11/X.h>
#include "ft_game.h"
#include "ft_event_handlers.h"

void	ft_mlx_hook_functions(t_game *game)
{
	
	//mlx_loop_hook(game->mlx.mlx_ptr, &ft_handler_no_event, game->mlx);
#if OS == Mac
	mlx_hook(game->mlx.win_ptr, ON_KEYDOWN, MLX_DEFAULT_MASK, &ft_handler_keypress, game);
#endif 
#if OS == Linux 
	mlx_hook(game->mlx.win_ptr, KeyPress, KeyPressMask, &ft_handler_keypress, game);
#endif
	mlx_hook(game->mlx.win_ptr, ON_DESTROY, MLX_DEFAULT_MASK, &ft_handler_destroy, game);
	mlx_loop_hook(game->mlx.mlx_ptr,&ft_handler_render,game);
}
