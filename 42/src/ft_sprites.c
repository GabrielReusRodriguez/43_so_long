/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprites.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:48:41 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/14 23:42:09 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_sprites.h"

t_sprite	*ft_sprite_loader(t_mlx *mlx, char *path, unsigned char type, \
				unsigned char status)
{
	t_sprite	*sprite;
	sprite = (t_sprite *)malloc(sizeof(t_sprite));
	if (sprite == NULL)
		return (NULL);
	sprite->path = path;
	sprite->type = type;
	sprite->status = status;
	sprite->mlx_img = mlx_xpm_file_to_image(mlx, sprite->path, &sprite->width, &sprite->heigh);
	if(sprite->mlx_img == NULL)
	{
		ft_sprite_destroy(sprite);
		return (NULL);
	}
	return (sprite);
}

void	ft_sprite_destroy(t_sprite	*sprite)
{
	if (sprite != NULL)
	{
		if (sprite->path != NULL)
			free (sprite->path);
		if (sprite->mlx_img != NULL)
			free (sprite->mlx_img);
		free (sprite);
	}
}

void		*ft_sprite_load_all(t_mlx *mlx)
{
	t_sprite *sprite;

	sprite = ft_sprite_loader(mlx, "", "1", 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
	sprite = ft_sprite_loader(mlx, "", "C", 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
	sprite = ft_sprite_loader(mlx, "", "P", 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
	sprite = ft_sprite_loader(mlx, "", "E", 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
}
