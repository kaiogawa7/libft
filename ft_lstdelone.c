/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:28 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:28 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (1);
// 	node->content = ft_strdup("Hello");
// 	node->next = NULL;
// 	printf("before: %s\n", (char *)node->content);
// 	ft_lstdelone(node, free);
// 	printf("content and node are freed\n");
// 	return (0);
// }
