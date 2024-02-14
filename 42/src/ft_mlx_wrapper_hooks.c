/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper_hooks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:43:42 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/14 22:20:29 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <X11/X.h>
#include "ft_mlx_wrapper.h"
#include "ft_event_handlers.h"

void	ft_mlx_hook_functions(t_mlx *mlx)
{
	
	mlx_loop_hook(mlx->mlx_ptr, &ft_handler_no_event, mlx);
#if OS == Mac
	mlx_hook(mlx->win_ptr, ON_KEYDOWN, MLX_DEFAULT_MASK, &ft_handler_keypress, mlx);
#endif 
#if OS == Linux 
	mlx_hook(mlx->win_ptr, KeyPress, KeyPressMask, &ft_handler_keypress, mlx);
#endif

	mlx_hook(mlx->win_ptr, ON_DESTROY, MLX_DEFAULT_MASK, &ft_handler_destroy, mlx);
	mlx_loop_hook(mlx->mlx_ptr,&ft_handler_render,mlx);
}
