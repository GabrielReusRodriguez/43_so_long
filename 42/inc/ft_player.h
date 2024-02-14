/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:30:26 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/14 23:03:40 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PLAYER_H
# define FT_PLAYER_H

# include "ft_geometry2d.h"
# include "ft_sprites.h"

typedef struct s_player
{
	t_sprite    	*sprite_up;
	t_sprite    	*sprite_down;
	t_sprite    	*sprite_left;
	t_sprite    	*sprite_right;
	t_point2d   	position;
	unsigned char	orientation;
}   t_player;

t_player    *ft_player_create();
void        ft_player_destroy(t_player *player);

#endif