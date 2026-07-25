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
	int		i;
	int		length;
	char	*dest;

	length = 0;
	while (src[length] != '\0')
		length++;
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
