/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:59:33 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 23:58:23 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_map.h"
#include "ft_get_next_line.h"
#include "libft.h"

static char	*ft_read_map_file(const char *map_file)
{
	int		fd;
	char	*line;
	char	*map;
	char	*aux;

	fd = open(map_file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	line = map_file;
	map = (char *)ft_calloc(1, 1);
	if (map == NULL)
		return (NULL);
	while(line != NULL)
	{	
		line = ft_get_next_line_many_fds(fd);
		if (line != NULL)
		{
			aux = map;
			map = ft_strjoin(map, line);
			free(aux);
		}
	}
	close(fd);
	return (map);
}

t_map	*ft_map_load(const char *map_file)
{
	t_map	*map;
	char	*char_map;
	
	map = (t_map *)malloc(sizeof(t_map));
	if(map == NULL)
		return (NULL);
	char_map = ft_read_map_file(map_file);
	if (char_map == NULL)
		return (NULL);
	map->ber_map = ft_split(char_map,'\n');
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
	if (map->tiles != NULL)
	{
		i = 0;
		while (i < map->height)
		{
			free (map->tiles[i]);
		}
		free (map->tiles);
	}

}

t_map	ft_map_new()
{
	t_map	map;

	map.ber_map = NULL;
	map.tiles = NULL;
	map.height = 0;
	map.width = 0;
	return (map);
}