/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:15:32 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/30 21:28:45 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (end > start && is_set(s1[end - 1], set))
		end--;
	len = end - start;
	trim = (char *)malloc(sizeof(char) * (len + 1));
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + start, len);
	trim[len] = '\0';
	return (trim);
}

// int	main(void)
// {
// 	const char	*s1 = "!!!Hello 42!!!";
// 	const char	*set = "!";
// 	char		*trimmed;

// 	trimmed = ft_strtrim(s1, set);
// 	if (!trimmed)
// 		dprintf(2, "Memory allocation failed.\n");
// 	else
// 	{
// 		printf("Original: \"%s\"\n", s1);
// 		printf("Trimmed : \"%s\"\n", trimmed);
// 		free(trimmed);
// 	}
// 	return (0);
// }
