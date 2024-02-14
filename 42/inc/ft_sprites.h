/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprites.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:44:14 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/14 23:38:42 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPRITES_H
# define FT_SPRITES_H

typedef struct s_sprite
{
	unsigned char   type;
	unsigned char   status;
	char	        *path;
	int		        width;
	int		        heigh;
	void	        *mlx_img;
}	t_sprite;

# include "ft_mlx_wrapper.h"

t_sprite	*ft_sprite_loader(t_mlx *mlx, char *path, unsigned char type, \
				unsigned char status);
void		ft_sprite_destroy(t_sprite	*sprite);
void		*ft_sprite_load_all(t_mlx *mlx);



#endif