/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:33:04 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("'a' (true): %s",ft_isalnum('a') == 1 ? "true" : "False");
}
*/
