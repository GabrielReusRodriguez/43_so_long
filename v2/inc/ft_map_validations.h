/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_validations.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:38:59 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 23:41:39 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_VALIDATIONS_H
# define FT_MAP_VALIDATIONS_H

# include "ft_map.h"

t_bool	ft_map_is_rectangular(t_map *map);
t_bool	ft_map_min_size(t_map *map);
t_bool	ft_map_has_all_elements(t_map *map);
t_bool	ft_map_is_closed(t_map *map);
t_bool	ft_map_has_valid_path(t_map *map);
t_bool	ft_map_validation(t_map *map);


#endif