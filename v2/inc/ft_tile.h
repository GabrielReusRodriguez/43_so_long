/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tile.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:51:56 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 14:16:24 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TILE_H
# define FT_TILE_H

typedef struct s_tile
{
	void			*tile;
	unsigned char	type;
	unsigned char	status;
}	t_tile;


#endif