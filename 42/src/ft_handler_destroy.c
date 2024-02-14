/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:38:07 by gabriel           #+#    #+#             */
/*   Updated: 2024/02/14 21:46:36 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_mlx_wrapper.h"

int	ft_handler_destroy(t_mlx *param)
{
	printf("DEstroy event....\n");
	ft_mlx_destroy_window(param);
    return (0);
}