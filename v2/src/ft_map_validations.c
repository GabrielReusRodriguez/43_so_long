/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_validations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:58:14 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/15 23:51:00 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_validations.h"

t_bool	ft_map_validation(t_map *map)
{
	size_t	i;
	char	*line;
	
	if (map->ber_map == NULL)
	{
		return (FALSE);
	}
	if (ft_map_is_rectangular(map) == FALSE)
	{
		return (FALSE);
	}
	if (ft_map_is_min_size(map) == FALSE)
	{
		return (FALSE);
	}
	if (ft_map_has_all_elements(map) == FALSE)
	{
		return (FALSE);
	}
	return (TRUE);
}

