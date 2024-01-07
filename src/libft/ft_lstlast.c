/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarabul <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:34:35 by ykarabul          #+#    #+#             */
/*   Updated: 2023/10/21 06:30:26 by ykarabul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*travel;

	if (!lst)
		return (NULL);
	travel = lst;
	while (travel -> next != NULL)
	{
		travel = travel -> next;
	}
	return (travel);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*liste = ft_lstnew((void *)49);
	t_list	*tut;

	for (size_t i = 50; i < 55; i++)
	{
		ft_lstadd_back(&liste, ft_lstnew((void *)i));
	}
	tut = ft_lstlast(liste);
	printf("%c", (char)(tut -> content));
}
*/
