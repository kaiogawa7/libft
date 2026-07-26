/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:13:41 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 20:55:52 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char	str1[10] = "AAAAAAAAA";
// 	char	str2[10] = "AAAAAAAAA";

// 	printf("--- Test 1: Fill with '*' ---\n");
// 	ft_memset(str1, '*', 5);
// 	memset(str2, '*', 5);
// 	printf("ft_res: [%s]\n", str1);
// 	printf("original_res: [%s]\n", str2);
// }
