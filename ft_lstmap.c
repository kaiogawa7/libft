/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:45 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:45 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, node);
		lst = lst->next;
	}
	return (nlst);
}

// static void	*add_bang(void *content)
// {
// 	return (ft_strjoin((char *)content, "!"));
// }

// static void	del_nothing(void *content)
// {
// 	(void)content;
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*nlst;
// 	t_list	*node;

// 	lst = ft_lstnew("A");
// 	ft_lstadd_back(&lst, ft_lstnew("B"));
// 	nlst = ft_lstmap(lst, add_bang, free);
// 	node = nlst;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	ft_lstclear(&nlst, free);
// 	ft_lstclear(&lst, del_nothing);
// 	return (0);
// }
