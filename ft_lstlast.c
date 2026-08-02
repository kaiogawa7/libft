/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:39 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:39 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	c;

// 	a.content = "A";
// 	b.content = "B";
// 	c.content = "C";
// 	a.next = &b;
// 	b.next = &c;
// 	c.next = NULL;
// 	printf("last: %s\n", (char *)ft_lstlast(&a)->content);
// 	return (0);
// }
