/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:10:38 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/03/21 20:00:44 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[j] == '\0' || n == NULL)
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && i + j < len)
		{
			++j;
			if (n[j] == '\0')
				return (h + i);
		}
		++i;
	}
	return (NULL);
}
