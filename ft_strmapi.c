/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:15:10 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:15:10 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*dest;

	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (i < (unsigned int)len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

// static char	function(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (ft_toupper(c));
// 	else
// 		return (ft_tolower(c));
// }

// int	main(void)
// {
// 	char	str[] = "hElLo wOrLd";
// 	char	*result;

// 	result = ft_strmapi(str, function);
// 	if (!result)
// 		printf("%s", "Mem alloc fail");
// 	else
// 	{
// 		printf("Before: %s\n", str);
// 		printf("After: %s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
