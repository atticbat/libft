/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:15:37 by khatlas           #+#    #+#             */
/*   Updated: 2022/04/09 14:21:20 by khatlas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	len;
	size_t			i;

	if (!s || !f)
		return (NULL);
	len = (unsigned int) ft_strlen(s);
	ptr = (char *) malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	i = 0;
	while ((unsigned int) i < len)
	{
		ptr[i] = (*f)(i, ptr[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
