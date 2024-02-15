/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coin.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:42:59 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/14 23:45:10 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COIN_H
# define FT_COIN_H

# include "ft_geometry2d.h"
# include "ft_utils.h"

typedef s_struct
{
	t_point2d	position;
	t_bool		ative;
}	t_coin;

#endif