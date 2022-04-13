/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 02:04:51 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/13 17:22:16 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buffer;

	buffer = *lst;
	while (buffer != NULL)
	{
		del(buffer->content);
		buffer = buffer->next;
		free(*lst);
		*lst = buffer;
	}
	free(*lst);
	lst = NULL;
}
