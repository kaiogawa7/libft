/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:34 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:34 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	f(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		*str = ft_toupper(*str);
// 		str++;
// 	}
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
// 	t_list	*tmp;
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
// 	printf("Before applying funcion:\n");
// 	print_list(lst);
// 	ft_lstiter(lst, f);
// 	printf("After applying funtion:\n");
// 	while (lst)
// 	{
// 		tmp = lst->next;
// 		free(lst->content);
// 		free(lst);
// 		lst = tmp;
// 	}
// 	return (0);
// }
