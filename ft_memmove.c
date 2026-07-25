/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:13:26 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:13:26 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (src < dest)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}

// int	main(void)
// {
// 	char str[] = "123456789";

// 	printf("Before: %s\n", str);

// 	// "12345" を "34567" の位置にずらしてコピー（重なりあり）
// 	// src: str ("12345...")
// 	// dest: str + 2 ("34567...")
// 	ft_memmove(str + 2, str, 5);

// 	printf("After : %s\n", str);
// 	// 正解は "121234589" になるはず！
// 	// もし memcpy だと "121212189" のように壊れる可能性があります。

// 	return (0);
// }
