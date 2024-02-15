/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:25:13 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 18:40:21 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVENTS_H
# define FT_EVENTS_H


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

# ifdef LINUX
#  include <X11/X.h>
#  define KEY_PRESS_EVENT KeyPress
#  define KEY_PRESS_MASK  KeyPressMask
# endif

# ifdef MAC
#  define KEY_PRESS_EVENT ON_KEYDOWN
#  define KEY_PRESS_MASK  0
# endif


#endif