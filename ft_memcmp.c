/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:50:23 by khatlas           #+#    #+#             */
/*   Updated: 2022/03/28 15:33:27 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str, const void *sub, size_t n)
{
	size_t			i;
	unsigned char	*mstr;
	unsigned char	*sstr;

	i = 0;
	mstr = (unsigned char *) str;
	sstr = (unsigned char *) sub;
	while (i < n)
	{
		if (mstr[i] != sstr[i])
			return (mstr[i] - sstr[i]);
		i++;
	}
	return (0);
}
