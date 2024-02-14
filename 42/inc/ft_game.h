/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:05:02 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/14 23:19:32 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_H
# define FT_GAME_H

# include "ft_player.h"
# include "ft_map.h" 

typedef struct s_game
{
	unsigned int 	score;
	t_player		player;
	t_map           map;
}   t_game;

t_game  *ft_game_new();
void    ft_game_destroy(t_game  *);


#endif