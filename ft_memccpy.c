/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:36:08 by tpandya           #+#    #+#             */
/*   Updated: 2025/05/07 15:36:10 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dest + 1 + i);
		i++;
	}
	return (NULL);
}
