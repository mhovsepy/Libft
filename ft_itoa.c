/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <mhovsepy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:28:12 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/04/27 16:11:12 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nn;

	nn = n;
	len = str_len(nn);
	str = malloc(len + 1);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (nn < 0)
	{
		nn *= -1;
		str[0] = '-';
	}
	str[len] = 0;
	while (nn)
	{
		str[(len--) - 1] = ((nn % 10) + 48);
		nn /= 10;
	}
	return (str);
}
