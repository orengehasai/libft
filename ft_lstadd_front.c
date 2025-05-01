/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takenakatakeshiichirouta <takenakatakes    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 00:43:38 by takenakatak       #+#    #+#             */
/*   Updated: 2025/05/02 00:33:19 by takenakatak      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

// #include <string.h>

// int main(int argc, char const *argv[])
// {
// 	t_list *l = ft_lstnew(strdup("nyacat"));
//     t_list *n = ft_lstnew(strdup("OK"));

//     ft_lstadd_front(&l, n);
//     if (l == n && !strcmp(l->content, "OK"))
//     {
//             printf("SUCCESS");
// 			return 0;
//     }
//     printf("FAILED");
// 	return 0;
// }
