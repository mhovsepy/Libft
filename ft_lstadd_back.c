/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhovsepy <mhovsepy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:50:02 by mhovsepy          #+#    #+#             */
/*   Updated: 2022/04/27 16:36:28 by mhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tsl;

	tsl = *lst;
	if (!tsl)
	{
		*lst = new;
		return ;
	}
	tsl = ft_lstlast(*lst);
	tsl->next = new;
}
