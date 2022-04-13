/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:54:43 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/13 17:55:05 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*buffer1;
	t_list	*buffer2;

	head = NULL;
	buffer1 = head;
	while (lst)
	{
		ft_lstadd_front(&buffer1, f(lst));
		if (!buffer1)
		{
			ft_lstdelone(buffer1, del);
			buffer1 = buffer2;
		}
		lst = lst->next;
		buffer2 = buffer1;
	}
	return (head);
}
