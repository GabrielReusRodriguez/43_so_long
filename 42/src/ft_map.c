/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:59:33 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 14:12:02 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_map.h"

t_map	*ft_map_load(const char *map_file)
{
	t_map	*map;
	int		fd;
	
	fd = open(map_file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	close(fd);
	return (map);
}


void    ft_map_destroy(t_map *map)
{
	size_t	i;
		
	if (map->ber_map != NULL)
	{
		i = 0;
		while (i < map->height)
		{
			free (map->ber_map[i]);
		}
		free (map->ber_map);
	}

	t_tile			**tiles;
}

t_bool	ft_map_validation(t_map *map)
{
	return (TRUE);
}