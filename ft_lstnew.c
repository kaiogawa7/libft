/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:52 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:52 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("Hello");
// 	if (!node)
// 		return (1);
// 	printf("content: %s\n", (char *)node->content);
// 	if (node->next == NULL)
// 		printf("next: NULL\n");
// 	free(node);
// 	return (0);
// }
