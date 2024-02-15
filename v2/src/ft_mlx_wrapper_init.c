/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper_init.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:15:55 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/13 23:22:27 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mlx_wrapper.h"
#include "ft_config.h"

t_mlx    ft_mlx_new()
{
	t_mlx   mlx;

	mlx.mlx_ptr = NULL;
	mlx.win_ptr = NULL;
	return (mlx);
}

void	*ft_mlx_init(t_mlx *mlx)
{
	mlx->mlx_ptr = mlx_init();
	return (mlx->mlx_ptr);
}

void	*ft_mlx_create_window(t_mlx *mlx)
{	
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGH, \
			WINDOW_NAME);
	return (mlx->win_ptr);
}

