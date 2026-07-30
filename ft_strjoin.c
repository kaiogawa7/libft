/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:14:42 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/30 18:23:55 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, len_s1);
	ft_memcpy(dest + len_s1, s2, len_s2);
	dest[len_s1 + len_s2] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*dest;

// 	s1 = "Hello ";
// 	s2 = "World";
// 	dest = ft_strjoin(s1, s2);
// 	printf("string combined: \"%s\"\n", dest);
// 	free(dest);
// 	return (0);
// }
