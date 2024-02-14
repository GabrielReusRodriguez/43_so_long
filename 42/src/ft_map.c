/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:59:33 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 00:04:39 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <fcntl.h>
#include "ft_map.h"

t_map	*ft_map_load(const char map_file)
{
	t_map	*map;
	int		fd;
	
	fd = open(map_file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	close(fd);
	return (map);
}


void    ft_map_destroy(t_map *map);
t_bool	ft_map_validation(t_map *map);