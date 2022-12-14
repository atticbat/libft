/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:51:03 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/08 12:57:41 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	c = c % 128;
	len = ft_strlen(str);
	str = str + len;
	while (len + 1)
	{
		if (*str == c)
			return ((char *) str);
		len--;
		str--;
	}
	if (c == 0)
		return ((char *) str);
	return (0);
}
