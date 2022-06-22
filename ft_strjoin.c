/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:41:09 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/04/19 15:19:17 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)

{
	char	*urish;
	int		i;
	int		j;

	i = 0;
	j = 0;
	urish = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!urish)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		urish[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
	{
		urish[i] = s2[j];
		j++;
		i++;
	}
	urish[i] = '\0';
	return (urish);
}
