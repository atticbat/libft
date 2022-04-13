/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:54:43 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/13 22:23:54 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*buffer1;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst)
	{
		buffer1 = ft_lstnew(f(lst->content));
		if (!buffer1)
		{
			ft_lstclear(&buffer1, del);
			return (NULL);
		}
		ft_lstadd_back(&head, buffer1);
		lst = lst->next;
	}
	return (head);
}
