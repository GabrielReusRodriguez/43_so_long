/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprites.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:44:14 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 12:27:46 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPRITES_H
# define FT_SPRITES_H

# include "ft_mlx_wrapper.h"

typedef struct s_sprite
{
	unsigned char   type;
	unsigned char   status;
	char	        *path;
	int		        width;
	int		        heigh;
	void	        *mlx_img;
}	t_sprite;

t_sprite	*ft_sprite_load(t_mlx *mlx, char *path, unsigned char type, \
				unsigned char status);
void		ft_sprite_destroy(t_sprite	*sprite);
void		*ft_sprite_load_all(t_mlx *mlx);



#endif