/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:36:47 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (char *)s + start, len + 1);
	return (substr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "ahmet eryilmaz";
	char	*ret = ft_substr(&str[3], 0, 9);

	printf("%s -> %s", str, ret);
}
*/
