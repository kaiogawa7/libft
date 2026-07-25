/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:14:15 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:14:15 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
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

// 	b = 'l';
// 	c = 'a';
// 	printf("%s\n", ft_strchr(a, b));
// 	printf("%s\n", ft_strchr(a, c));
// 	return (0);
// }
