/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_wrapper.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:12:03 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/14 22:07:37 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_WRAPPER_H
# define FT_MLX_WRAPPER_H

//#include "mlx/mlx.h"
# include "mlx.h"

# define MLX_DEFAULT_MASK 0

# ifndef OS 
#  define OS  Mac
# endif

typedef struct s_mlx {
	void	*mlx_ptr;
	void	*win_ptr;
}	t_mlx;

enum e_mlx_events
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

t_mlx	ft_mlx_new();
void	*ft_mlx_init(t_mlx *mlx);
void	ft_mlx_free(t_mlx *mlx);

void	*ft_mlx_create_window(t_mlx *mlx);
void	ft_mlx_destroy_window(t_mlx *mlx);
void	ft_mlx_destroy_display(t_mlx *mlx);

void	ft_mlx_hook_functions(t_mlx *mlx);

#endif
