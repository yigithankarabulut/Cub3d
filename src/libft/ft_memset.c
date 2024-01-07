/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:35:24 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)s)[counter] = c;
		counter++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*a = malloc(sizeof(char) * 5);
	char	*b = malloc(sizeof(char) * 5);
	char	src = 'A';

	printf("org : %s, ", memset(a, src, 5));
	printf("mine : %s", ft_memset(b, src, 5));
}
*/
