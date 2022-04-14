/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:23:16 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/14 21:25:21 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*buffer;

	buffer = lst;
	if (lst != NULL)
	{
		while (lst != NULL)
		{
			buffer = buffer->next;
			f(lst->content);
			lst = buffer;
		}
	}
}
