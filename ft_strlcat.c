/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:04:00 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/04/08 17:12:12 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	i;
	size_t	r;
	size_t	a;

	i = 0;
	r = 0;
	a = 0;
	while (src[r])
		r++;
	while (dst[a] && a < dstsize)
		a++;
	i = a;
	r += a;
	while (src[a - i] && a + 1 < dstsize)
	{
		dst[a] = src[a - i];
		a++;
	}
	if (a < dstsize)
		dst[a] = 0;
	return (r);
}
