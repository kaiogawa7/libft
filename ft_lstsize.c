/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:59 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:59 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
// 	printf("size: %d\n", ft_lstsize(&a));
// 	printf("size of empty list: %d\n", ft_lstsize(NULL));
// 	return (0);
// }
