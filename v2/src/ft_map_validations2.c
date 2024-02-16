/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_validations2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:58:14 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 23:51:42 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_validations.h"
#include "libft.h"

t_bool	ft_map_is_rectangular(t_map *map)
{
	size_t	i;
	char	*line;

	map->width = ft_strlen(map->ber_map);
	i = 0;
	line = map->ber_map;
	while (line != NULL)
	{
		line = map->ber_map[i];
		if (map->width != ft_strlen(line))
		{
			return (FALSE);			
		}
		i++;
	}
	map->height = i;
	return (TRUE);
}

t_bool ft_map_min_size(t_map *map)
{
	if (map->height < 3 || map->width < 3)
	{
		return (FALSE);
	}
}

t_bool	ft_map_has_all_elements(t_map *map)
{
	size_t	i;
	char	*line;
	size_t	num_player;
	size_t	num_coins;
	size_t	num_exit;

	i = 0;
	num_player = 0;
	num_coins = 0;
	num_exit = 0;
	line = map->ber_map[i];
	while (line != NULL)
	{
		if (ft_strchr(line, PLAYER) != NULL)
			num_player++;
		if (ft_strchr(line, COIN) != NULL)
			num_coins++;
		if (ft_strchr(line, EXIT) != NULL)
			num_exit++;
		line = map->ber_map[++i];
	}
	if(num_player != 1 || num_coins == 0 || num_exit != 1)
		return (FALSE);
	return (TRUE);
}

static t_bool	ft_map_is_closed(t_map *map)
{
	size_t	i;
	size_t	j;

	i = 0;
	while(map->ber_map[i] != NULL)
	{
		if (i == 0 || i == map->height - 1)
		{
			j = 0;
			while (j < map->width)
			{
				if (map->ber_map[i][j] != WALL)
					return (FALSE);
				j++;
			}
		}
		else
		{
			j = map->width -1;
			if(map->ber_map[i][0] != WALL || map->ber_map[i][j] != WALL )
				return (FALSE);
		}
		i++;
	}
	return (TRUE);
}

t_bool	ft_map_has_valid_path(t_map *map)
{
	
}

