/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:14:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/02/11 02:41:02 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#include "mlx/mlx.h"
#include "mlx.h"

int main(int argc, char **argv)
{
    void    *mlx_ptr;
    void    *win_ptr;

    argc = argc;
    argv= argv;

    mlx_ptr = mlx_init();
    if(mlx_ptr == NULL)
        return (1);
    printf("init\n");
    win_ptr = mlx_new_window(mlx_ptr, 600, 400 , "hello :)");
    if(win_ptr == NULL)
    {
        free(mlx_ptr);
        return (1);
    }
    printf("new window\n");
    mlx_destroy_window(mlx_ptr, win_ptr);
    mlx_destroy_display(mlx_ptr);
    free(mlx_ptr);
    return (0);
}