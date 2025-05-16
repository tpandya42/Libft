/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:34:22 by tpandya           #+#    #+#             */
/*   Updated: 2025/05/07 15:34:23 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	init_base(char *base)
{
	int	i;

	i = 0;
	while (++i < 10)
		base[i] = i;
	while (i < 16)
	{
		base[i] = i - 10 + 'A';
		i++;
	}
	base[16] = 0;
}

char	*ft_itoa_base(int n, int base)
{
	char			charbase[17];
	char			*res;
	unsigned int	unsigned_n;
	int				nbdigits;

	if (base < 2 || base > 16)
		return (NULL);
	init_base(charbase);
	unsigned_n = (n < 0) ? -n : n;
	nbdigits = ft_nbdigits_base(unsigned_n, base);
	if (!(res = ft_strnew(nbdigits)))
		return (NULL);
	while (--nbdigits)
	{
		res[nbdigits] = charbase[unsigned_n % base];
		unsigned_n /= base;
	}
	return (res);
}
