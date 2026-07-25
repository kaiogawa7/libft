/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:15:20 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:15:20 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (i + j < len && little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*big = "Hello 42!";
// 	const char	*little = "42";
// 	size_t		len;
// 	char		*result;

// 	len = 10;
// 	result = ft_strnstr(big, little, len);
// 	if (result)
// 		printf("Found '%s' in '%s' → \"%s\"\n", little, big, result);
// 	else
// 		printf("'%s' not found in %zu chars of '%s'\n", little, len, big);
// 	return (0);
// }
