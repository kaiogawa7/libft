/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:10 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:10 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	a;
// 	t_list	b;
// 	t_list	*node;

// 	a.content = "A";
// 	b.content = "B";
// 	lst = NULL;
// 	ft_lstadd_back(&lst, &a);
// 	ft_lstadd_back(&lst, &b);
// 	node = lst;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	return (0);
// }
