/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:04:25 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/04/23 19:30:32 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*dest;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		dest = malloc(0);
	else if (ft_strlen(s) - start > len)
		dest = malloc(len + 1);
	else
		dest = malloc(ft_strlen(s) - start);
	if (dest == NULL || s == NULL)
		return (0);
	while (start < ft_strlen(s) && i < len)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
