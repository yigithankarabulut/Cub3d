/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:31:38 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	if (y < 0 || y > SCREEN_HEIGH)
		return ;
	if (x < 0 || x > SCREEN_WIDTH)
		return ;
	if (!data->addr)
		return ;
	dst = \
	data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

size_t	get_texture_color(t_data *texture, int pixel_x, int pixel_y)
{
	return (*(size_t *)((texture->addr + (pixel_y * texture->line_length)
			+ (pixel_x * texture->bits_per_pixel / 8))));
}
