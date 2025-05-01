/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takenakatakeshiichirouta <takenakatakes    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 01:40:57 by takenakatak       #+#    #+#             */
/*   Updated: 2025/05/01 16:48:59 by takenakatak      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	tmp;

	while (*lst)
	{
		tmp.next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp.next;
	}
}
