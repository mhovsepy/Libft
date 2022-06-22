/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:26:37 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/04/21 13:55:31 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const	void *s1, const void *s2, size_t n)
{
	char	*s;
	char	*h;
	size_t	i;

	h = (char *)s2;
	s = (char *)s1;
	i = 0;
	while (i < n)
	{	
		if (s[i] != h[i])
			return ((unsigned char)s[i] - (unsigned char)h[i]);
		i++;
	}
	return (0);
}
