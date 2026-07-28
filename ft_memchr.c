/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:13:03 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/26 20:31:12 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "Hello, 42!";
// 	char	*result;

// 	result = (char *)ft_memchr(str, '4', 10);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("not found\n");
// 	result = (char *)ft_memchr(str, 'z', 10);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("not found\n");
// 	result = (char *)ft_memchr(str, '!', 3);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("not found\n");
// 	return (0);
// }
