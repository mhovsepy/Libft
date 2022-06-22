/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <mhovsepy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:55:46 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/04/26 16:31:58 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	size_t	i;

	i = 0;
	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	if (s1[i] == 0)
		return (ft_substr(s1, 0, i + 1));
	if (s1 == 0 || set == 0)
		return (0);
	while (*s1 && ft_strchr(set, s1[i]))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
