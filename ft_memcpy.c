/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:13:19 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/26 11:05:19 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

// int	main(void)
// {
// 	char	src1[] = "Hello, 42!";
// 	char	dest1[20];
// 	int		src2[] = {10, 20, 30, 40, 50};
// 	int		dest2[5];
// 	void	*res;

// 	printf("--- Test 1: String Copy ---\n");
// 	ft_memcpy(dest1, src1, 6);
// 	dest1[6] = '\0';
// 	printf("Result: [%s] (Expected: [Hello,])\n", dest1);

// 	printf("\n--- Test 2: Int Array Copy ---\n");
// 	ft_memcpy(dest2, src2, sizeof(int) * 3);
// 	for (int i = 0; i < 3; i++)
// 		printf("dest2[%d]: %d\n", i, dest2[i]);

// 	printf("\n--- Test 3: NULL Check ---\n");
// 	res = ft_memcpy(NULL, NULL, 5);
// 	if (res == NULL)
// 		printf("OK\n");
// 	else
// 		printf("Notice: Result is %p\n", res);
// 	return (0);
// }
