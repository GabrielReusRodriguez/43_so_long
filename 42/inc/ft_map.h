/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:05:25 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 11:20:08 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_MAP_H
# define FT_MAP_H

# include "ft_tile.h"
# include "ft_utils.h"

typedef unsigned char   t_cell_type;
# define WALL	'1'
# define VOID	'0'
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

t_map	*ft_map_load(const char *map_name);
void    ft_map_destroy(t_map *map);
t_bool	ft_map_validation(t_map *map);

#endif
