/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:46:25 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/14 23:50:38 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EXIT_H
# define FT_EXIT_H

# include "ft_geometry2d.h"
# include "ft_utils.h"

typedef struct s_exit
{
	t_point2d	position;
	t_bool		active;
}	t_exit;

#endif