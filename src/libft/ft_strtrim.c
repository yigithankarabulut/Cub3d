/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:36:42 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		index;
	char	*ret;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		end--;
	ret = malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	index = 0;
	while (start < end)
	{
		ret[index++] = s1[start++];
	}
	ret[index] = '\0';
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*trim = " xXx Kuvarti xXx ";
	char	*set = " xX";

	printf("%s", ft_strtrim(trim, set));
}
*/
