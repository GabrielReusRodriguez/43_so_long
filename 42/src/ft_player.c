/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:27:30 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 14:06:56 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_player.h"

t_player    ft_player_create()
{
	t_player player;

	player.sprite_up = NULL;
	player.sprite_down = NULL;
	player.sprite_left = NULL;
	player.sprite_right = NULL;
	return (player);
}

void        ft_player_destroy(t_player *player)
{
	if (player->sprite_up != NULL)
	{
		free (player->sprite_up);
		player->sprite_up = NULL;
	}
	if (player->sprite_down != NULL)
	{
		free (player->sprite_down);
		player->sprite_down = NULL;
	}
	if (player->sprite_left != NULL)
	{
		free (player->sprite_left);
		player->sprite_left = NULL;
	}

	if (player->sprite_right != NULL)
	{
		free (player->sprite_right);
		player->sprite_right = NULL;
	}


}