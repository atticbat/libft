/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 01:38:25 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/13 19:00:07 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buffer;

	if (lst == NULL || new == NULL)
		;
	else if (*lst)
	{
		buffer = ft_lstlast(*lst);
		buffer->next = new;
	}
	else
	{
		*lst = new;
	}
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int	main()
//{
//	t_list	*head = NULL;
//	t_list	*node1 = NULL;
//	t_list	*node2 = NULL;
//
//	head = (t_list *) malloc (sizeof(t_list));
//	if (!head)
//		return (1);
//	head->content = "abcde";
//
//	node1 = (t_list *) malloc (sizeof(t_list));
//	node1->content = "efghi";
//
//	node2 = (t_list *) malloc (sizeof(t_list));
//	node2->content = "xdlmao";
//
//	head->next = node1;
//	node1->next = node2;
//	node2->next = NULL;
//	t_list	*newnode = NULL;
//	newnode = (t_list *) malloc (sizeof(t_list));
//	newnode->content = "jklmn";
//	newnode->next = NULL;
//	ft_lstadd_back(&head, newnode);
//	while (head != NULL)
//	{
//		printf("%s\n", head->content);
//		head = head->next;
//	}
//	return (0);
//}
