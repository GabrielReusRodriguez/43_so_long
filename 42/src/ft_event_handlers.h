/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event_handlers.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:27:28 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/13 22:32:47 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVENT_HANDLERS_H
# define FT_EVENT_HANDLERS_H

# include "ft_mlx_wrapper.h"

int	ft_handler_no_event(void *data);
int	ft_handler_keypress(int keycode, t_mlx *mlx);

#endif