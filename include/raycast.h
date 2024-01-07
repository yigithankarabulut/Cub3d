/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:30:14 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYCAST_H
# define RAYCAST_H

# include "structures.h"

void		raycast(t_cub3d *game);
double		getperpwalldist(t_raycast *ray);
t_raycast	initraycast(t_cub3d *game);
t_raycast	setwall(t_cub3d *game, t_raycast *ray);
t_raycast	raycastloopstart(t_raycast *ray, int x);

#endif
