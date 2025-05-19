/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:38:44 by tpandya           #+#    #+#             */
/*   Updated: 2025/05/11 18:41:34 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)str);
	if (!c)
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "i don't know what the hell is going oon";
	char	c = 'w';
	printf("%s", ft_strchr(str, c));
	return (0);
	
}*/
