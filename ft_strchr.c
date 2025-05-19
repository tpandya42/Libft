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
	const char	*str;

	if (!s)
		return (NULL);
	str = (const char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
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
