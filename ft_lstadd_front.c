/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:16 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:16 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
// 	ft_lstadd_front(&lst, &b);
// 	ft_lstadd_front(&lst, &a);
// 	node = lst;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	return (0);
// }
