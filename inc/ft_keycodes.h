/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keycodes.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:54:19 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 20:33:13 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_KEYCODES_H
# define FT_KEYCODES_H

/*
# ifdef LINUX


# endif
*/

# ifdef MAC
#  define KEY_CODE_ESC 53
# endif

# ifdef LINUX
#  include <X11/X.h>
#  include <X11/keysym.h>
#  define KEY_CODE_ESC XK_Escape
# endif

#endif