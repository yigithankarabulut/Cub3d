/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eventutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:37:49 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 07:13:43 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	finish(t_cub3d *game)
{
	exit(mlx_destroy_window(game->mlx, game->win));
	return (1);
}
