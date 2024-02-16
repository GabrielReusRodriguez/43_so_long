/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:05:25 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 23:56:53 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_MAP_H
# define FT_MAP_H

# include "ft_tile.h"
# include "ft_utils.h"

//typedef unsigned char   t_cell_type;
# define WALL	'1'
# define EMPTY	'0'
# define PLAYER	'P'
# define COIN	'C'
# define EXIT	'E'

typedef struct s_map
{
	char			**ber_map;
	//t_sprite		**sprites;
	t_tile			**tiles;
	unsigned int	width;
	unsigned int	height;
}	t_map;

t_map	ft_map_new();
t_map	*ft_map_load(const char *map_name);
void    ft_map_destroy(t_map *map);

#endif
