/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:09:10 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/03/21 19:59:48 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)

{
	unsigned char		*a;
	unsigned const char	*m;
	size_t				i;

	i = 0;
	a = (unsigned char *)d;
	m = (unsigned char *)s;
	while (i < n)
	{
		a[i] = m[i];
		i++;
	}
	return (d);
}
