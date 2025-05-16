/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:39:26 by tpandya           #+#    #+#             */
/*   Updated: 2025/05/11 18:39:28 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*str;
	const unsigned char	*last;

	str = (const unsigned char *)s;
	last = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)last);
}
