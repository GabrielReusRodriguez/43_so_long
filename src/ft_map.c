/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:59:33 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 18:42:35 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_map.h"

t_map	*ft_map_load(const char *map_file)
{
	t_map	*map;
	int		fd;
	
	map = (t_map *)malloc(sizeof(t_map));
	if(map == NULL)
		return (NULL);
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
}

t_bool	ft_map_validation(t_map *map)
{
	(void)map;
	return (TRUE);
}