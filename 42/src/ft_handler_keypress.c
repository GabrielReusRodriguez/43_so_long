/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_keypress.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:06:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/13 23:15:39 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <X11/X.h>
#include <X11/keysym.h>
#include "ft_event_handlers.h"


int	ft_handler_keypress(int keycode, t_mlx *mlx)
{
	mlx = mlx;
	printf("Key pressed: %d\n",keycode);
	if (keycode == XK_Escape)
	{
		
		printf("DESTROYED\n");
		ft_mlx_destroy_window(mlx);
		//ft_mlx_free(mlx);
		//printf("FREE\n");
		
	}
		
	//return (keycode);
	return (0);
}
