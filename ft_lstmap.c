/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takenakatakeshiichirouta <takenakatakes    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:50:11 by takenakatak       #+#    #+#             */
/*   Updated: 2025/05/02 02:22:53 by takenakatak      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*left;
	t_list	*back;
	t_list	*res;

	left = ft_lstnew(0);
	if (!left)
		return (NULL);
	back = left;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
			return (NULL);
		tmp->next = NULL;
		back->next = tmp;
		back = tmp;
		lst = lst->next;
	}
	res = left->next;
	del(left->content);
	free(left);
	return (res);
}

// void	*f(void *content)
// {
// 	(void ) content;
// 	return ("OK !");
// }

// void	del(void *content)
// {
// 	content = NULL;
// }

// #include <string.h>

// int main(int argc, char const *argv[])
// {
// 	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
//     t_list *ret;

//     l->next = ft_lstnew(strdup("ss"));
//     l->next->next = ft_lstnew(strdup("-_-"));
//     ret = ft_lstmap(l, f, del);
//     if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !")
//	&&!strcmp(ret->next->next->content,"OK !")&&!strcmp(l->content," 1 2 3 ")
// 	&&!strcmp(l->next->content,"ss")&&!strcmp(l->next->next->content,"-_-"))
//     {
// 		printf("TEST_SUCCESS");
// 		return 0;
// 	}
//     printf("TEST_FAILED");
// 	return 0;
// }
