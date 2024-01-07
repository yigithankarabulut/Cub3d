/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:32:44 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*ret;
	size_t	index;

	if (ft_strlen(str) < n)
		n = ft_strlen(str);
	ret = malloc(sizeof(char) * (n + 1));
	if (!ret)
		return (NULL);
	index = 0;
	while (index < n)
	{
		ret[index] = str[index];
		index++;
	}
	ret[index] = 0;
	return (ret);
}
