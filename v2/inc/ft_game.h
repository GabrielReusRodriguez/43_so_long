/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:05:02 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 18:50:58 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_H
# define FT_GAME_H

# include "ft_player.h"
# include "ft_map.h" 
# include "ft_mlx_wrapper.h"
//#include "mlx/mlx.h"
//# include "mlx.h"
//# include "ft_sprites.h"
# include "libft.h"

typedef struct s_game
{
	unsigned int 	score;
	t_player		player;
	t_map           *map;
	t_mlx			mlx;
	t_list			*loaded_sprites;
}   t_game;

t_game  ft_game_new();
void    ft_game_destroy(t_game  *);


#endif