/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:36:28 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	if (n == 0)
		return (0);
	counter = 0;
	while (counter < (n - 1) && s1[counter] && s2[counter])
	{
		if (s1[counter] != s2[counter])
			break ;
		counter++;
	}
	return (((unsigned char *)s1)[counter] - ((unsigned char *)s2)[counter]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "ahmet";
	char	*s2 = "ahmit";

	printf("ahmet > ahmit : %s", ft_strncmp(s1, s2, 5) > 0 ? "true" : "false" );
}
*/
