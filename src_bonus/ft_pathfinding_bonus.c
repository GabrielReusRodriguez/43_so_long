/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathfinding_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:36:08 by greus-ro          #+#    #+#             */
/*   Updated: 2024/03/02 20:33:26 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pathfinding_bonus.h"
#include "ft_bfs_bonus.h"
#include "ft_error_bonus.h"

t_bool	ft_path_exists(t_game	*game)
{
	t_map		*map;
	t_point2d	start;
	t_point2d	exit;

	map = game->map;
	if (map->ber_map == NULL)
	{
		ft_error_print_str("Error\nError loading map");
		return (FALSE);
	}
	start = ft_point2d_new(game->player.position.x, game->player.position.y);
	exit = ft_point2d_new(game->exit.position.x, game->exit.position.y);
	if (ft_bfs(game) == FALSE)
	{
		ft_error_print_str("Error\nThere is NOT a path from start to exit.");
		return (FALSE);
	}
	return (TRUE);
}
