/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper_func.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:27:40 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 12:29:20 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx_wrapper.h"

void	*ft_mlx_load_sprite(t_mlx *mlx,const char *path, int *width, \
				int *height)
{
	void	*img;
	img = mlx_xpm_file_to_image(mlx, (char *)path, width, height);
	return (img);
}
/*
t_sprite	*ft_mlx_sprite_loader(t_mlx *mlx, char *path, unsigned char type, \
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
*/