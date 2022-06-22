/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:51:28 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/03/22 16:19:13 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)

{
	char	*h;
	char	*i;

	h = malloc(ft_strlen(str) + 1);
	i = h;
	if (!h)
		return (NULL);
	while (*str)
	{
		*h = *str;
		str++;
		h++;
	}
	*h = '\0';
	return (i);
}
