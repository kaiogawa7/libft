/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:22 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:22 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;
	t_list	*next;

	if (!lst || !del)
		return ;
	pos = *lst;
	while (pos != NULL)
	{
		next = pos->next;
		del(pos->content);
		free(pos);
		pos = next;
	}
	*lst = NULL;
}

// static void	del(void *content)
// {
// 	free(content);
// }

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s -> ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;

// 	lst = NULL;
// 	s1 = strdup("one");
// 	s2 = strdup("two");
// 	s3 = strdup("three");
// 	ft_lstadd_back(&lst, ft_lstnew(s1));
// 	ft_lstadd_back(&lst, ft_lstnew(s2));
// 	ft_lstadd_back(&lst, ft_lstnew(s3));
// 	printf("Before clear:\n");
// 	print_list(lst);
// 	ft_lstclear(&lst, del);
// 	printf("After clear:\n");
// 	if (lst == NULL)
// 		printf("List is NULL\n");
// 	else
// 		print_list(lst);
// 	return (0);
// }
