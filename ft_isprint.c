/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:11:56 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:11:56 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	c;
// 	int	d;

// 	a = 'a';
// 	b = '1';
// 	c = '!';
// 	d = '\n';
// 	printf("%d\n", ft_isprint(a));
// 	printf("%d\n", ft_isprint(b));
// 	printf("%d\n", ft_isprint(c));
// 	printf("%d\n", ft_isprint(d));
// 	return (0);
// }
