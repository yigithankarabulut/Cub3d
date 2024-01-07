/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:34:17 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		new -> next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste;

	for (size_t i = 65; i < 70; i++)
	{
		ft_lstadd_front(&liste, ft_lstnew((void *)i));
	}
	printf("%c", (char)(liste -> content));
}
*/
