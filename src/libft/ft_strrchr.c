/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:36:37 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = (char *)s;
	while (*s)
		s++;
	while (s >= start)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "deneme yazisi";
	char	c = 'e';
	printf("%s | %c -> %s", str, c, ft_strrchr(str, c));
}
*/
