/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper_destroy.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:19:37 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 21:23:38 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_mlx_wrapper.h"

/*
the Mlx destroy window function DOES a free of win_ptr so 
it is NOT necessary to free again
*/
void	ft_mlx_destroy_window(t_mlx *mlx)
{
	printf("DESTROY\n");
	mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
	printf("DESTROYED\n");
	//free (mlx->win_ptr);
	//mlx->win_ptr = NULL;
}

#ifdef LINUX
void	ft_mlx_destroy_display(t_mlx *mlx)
{
	if (mlx->mlx_ptr != NULL)
	{
		mlx_destroy_display(mlx->mlx_ptr);
		free (mlx->mlx_ptr);
		mlx->mlx_ptr = NULL;
	}
}
#endif

#ifdef MAC
void	ft_mlx_destroy_display(t_mlx *mlx)
{
	if (mlx->mlx_ptr != NULL)
	{
		free (mlx->mlx_ptr);
		mlx->mlx_ptr = NULL;
	}
}
#endif

void	ft_mlx_destroy(t_mlx *mlx)
{
	mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
	ft_mlx_destroy_window(mlx);
	ft_mlx_destroy_display(mlx);
}

void	ft_mlx_free(t_mlx *mlx)
{
	if (mlx->mlx_ptr != NULL)
	{
		free (mlx->mlx_ptr);
		mlx->mlx_ptr = NULL;
	}
	if (mlx->win_ptr != NULL)
	{
		free (mlx->win_ptr);
		mlx->win_ptr = NULL;
	}
}
