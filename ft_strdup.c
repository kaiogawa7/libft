/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:14:21 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:14:21 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, len + 1);
	return (dest);
}

/* int	main(void){
	char *src = "Hello 42";
	char *dest = ft_strdup(src);

	if (!dest)
		dprintf(2, "Allocation Failed\n");
	else
		printf("the string got dupped to dest: %s", dest);
	free(dest);
	return (0);
}
 */
