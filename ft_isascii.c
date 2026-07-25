/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:11:41 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:11:41 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
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
// 	d = 128;
// 	printf("%d\n", ft_isascii(a));
// 	printf("%d\n", ft_isascii(b));
// 	printf("%d\n", ft_isascii(c));
// 	printf("%d\n", ft_isascii(d));
// 	return (0);
// }
