/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:14:15 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 21:30:39 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
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
// 	result = ft_strchr(a, b);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("not found\n");
// 	result = ft_strchr(a, c);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("not found\n");
// 	return (0);
// }
