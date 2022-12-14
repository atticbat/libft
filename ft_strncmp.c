/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:16:11 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/08 18:20:54 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *sub, size_t n)
{
	while (n)
	{
		if (*str == '\0')
			return (*str - *sub);
		if ((unsigned char) *str != (unsigned char) *sub)
			return ((unsigned char) *str - (unsigned char) *sub);
		str++;
		sub++;
		n--;
	}
	return (0);
}
