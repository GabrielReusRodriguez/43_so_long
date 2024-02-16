/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keycodes.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:54:19 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 23:48:31 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_KEYCODES_H
# define FT_KEYCODES_H

# ifdef MAC
#  define KEY_CODE_ESC 53
#  define KEY_CODE_A    0
#  define KEY_CODE_S    1
#  define KEY_CODE_D    2
#  define KEY_CODE_W    13
# endif

# ifdef LINUX
#  include <X11/X.h>
#  include <X11/keysym.h>
#  define KEY_CODE_ESC  XK_Escape
#  define KEY_CODE_A    XK_A
#  define KEY_CODE_S    XK_S
#  define KEY_CODE_D    XK_D
#  define KEY_CODE_W    XK_W
# endif

#endif