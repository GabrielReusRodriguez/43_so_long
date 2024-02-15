/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprites.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:48:41 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/15 14:09:54 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_sprites.h"
#include "libft.h"

void	ft_sprite_destroy(t_sprite	*sprite)
{
	/*
	if (sprite != NULL)
	{
		*/
		if (sprite->path != NULL)
		{
			free (sprite->path);
			sprite->path = NULL;
		}
		if (sprite->mlx_img != NULL)
		{
			free (sprite->mlx_img);
			sprite->mlx_img = NULL;
		}
		/*
		free (sprite);
	}
	*/
}

t_sprite	*ft_sprite_load(t_mlx *mlx, char *path, unsigned char type, \
				unsigned char status)
{
	t_sprite	*sprite;
	sprite = (t_sprite *)malloc(sizeof(t_sprite));
	if (sprite == NULL)
		return (NULL);
	sprite->path = path;
	sprite->type = type;
	sprite->status = status;
	sprite->mlx_img = ft_mlx_load_sprite(mlx, sprite->path, &sprite->width, &sprite->heigh);
	if(sprite->mlx_img == NULL)
	{
		ft_sprite_destroy(sprite);
		return (NULL);
	}
	return (sprite);
}

void		*ft_sprite_load_all(t_mlx *mlx)
{
	t_sprite *sprite;
	t_list	*loaded_sprites_list;
	t_list	*sprite_node;

	loaded_sprites_list = NULL;
	sprite = ft_sprite_load(mlx, "", '1', 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
	sprite_node = ft_lstnew(sprite);
	ft_lstadd_front(&loaded_sprites_list,sprite_node);
	sprite = ft_sprite_load(mlx, "", 'C', 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
	sprite_node = ft_lstnew(sprite);
	ft_lstadd_front(&loaded_sprites_list,sprite_node);
	sprite = ft_sprite_load(mlx, "", 'P', 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
	sprite_node = ft_lstnew(sprite);
	ft_lstadd_front(&loaded_sprites_list,sprite_node);
	sprite = ft_sprite_load(mlx, "", 'E', 0);
	if (sprite == NULL)
	{
		//dESTROY ALL 
		return (NULL);
	}
	sprite_node = ft_lstnew(sprite);
	ft_lstadd_front(&loaded_sprites_list,sprite_node);
	return (sprite);
}
