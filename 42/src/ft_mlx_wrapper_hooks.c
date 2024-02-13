/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper_hooks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:43:42 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/13 23:22:22 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <X11/X.h>
#include "ft_mlx_wrapper.h"
#include "ft_event_handlers.h"

void	ft_mlx_hook_functions(t_mlx *mlx)
{
    //mlx_loop_hook(mlx->mlx_ptr, &handle_no_event, mlx);
    //mlx_key_hook(mlx->win_ptr, &ft_keyboard_keypress, mlx);
    mlx_loop_hook(mlx->mlx_ptr, ft_handler_no_event, (void*)mlx);
    //mlx_hook(mlx->win_ptr, KeyPress, KeyPressMask, ft_handler_keypress, (void*)mlx); /* ADDED */
    mlx_key_hook(mlx->win_ptr, ft_handler_keypress, (void *)mlx);
}


//mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &handle_keypress, &data); /* ADDED */
//    mlx_hook(data.win_ptr, KeyRelease, KeyReleaseMask, &handle_keyrelease, &data); /* CHANGED */
