/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_keypress.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:06:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 21:28:27 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_keycodes.h"
#include "ft_event_handlers.h"


int	ft_handler_keypress(int keycode, t_game *game)
{
	printf("Key pressed: %d\n",keycode);
	if (keycode == KEY_CODE_ESC)
	{
		ft_handler_destroy(game);
	}
		
	//return (keycode);
	return (0);
}
