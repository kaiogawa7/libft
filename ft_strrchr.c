/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:15:25 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 19:31:55 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	a[] = "Hello";
// 	int		b;
// 	int		c;
// 	char	*result;

// 	b = 'l';
// 	c = 'a';
// 	result = ft_strrchr(a, b);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("not found\n");
// 	result = ft_strrchr(a, c);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("not found\n");
// 	return (0);
// }
