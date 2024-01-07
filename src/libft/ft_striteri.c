/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:36:00 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = 0;
	if (s)
	{
		while (s[index])
		{
			f(index, &s[index]);
			index++;
		}
	}
}
/*
#include <stdio.h>
void	funct(unsigned int a, char *b)
{
	*b = *b+a;
}
int main()
{
	char dizi[] = "aaaaaaaaaaaaaaaa";
	ft_striteri(dizi, funct);
	printf("%s",dizi);
}
*/
