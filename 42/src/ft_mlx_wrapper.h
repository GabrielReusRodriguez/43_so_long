/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:12:03 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/13 23:17:33 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_WRAPPER_H
# define FT_MLX_WRAPPER_H

//#include "mlx/mlx.h"
#include "mlx.h"

typedef struct s_mlx {
	void	*mlx_ptr;
	void	*win_ptr;
}	t_mlx;

t_mlx	ft_mlx_new();
void	*ft_mlx_init(t_mlx *mlx);
void	ft_mlx_free(t_mlx *mlx);

void	*ft_mlx_create_window(t_mlx *mlx);
void	ft_mlx_destroy_window(t_mlx *mlx);
void	ft_mlx_destroy_display(t_mlx *mlx);

void	ft_mlx_hook_functions(t_mlx *mlx);

#endif
