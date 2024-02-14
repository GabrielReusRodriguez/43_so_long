/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event_handlers.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:27:28 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/14 22:15:00 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVENT_HANDLERS_H
# define FT_EVENT_HANDLERS_H

# include "ft_mlx_wrapper.h"

int	ft_handler_no_event(void *data);
int	ft_handler_keypress(int keycode, t_mlx *mlx);
int	ft_handler_destroy(t_mlx *mlx);
int	ft_handler_render(void * param);

#endif