/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:14:32 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:14:32 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	f(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = (char)ft_tolower((unsigned char)*c);
// }

// int	main(void)
// {
// 	char	s[] = "HEllo 42";

// 	printf("Before: %s\n", s);
// 	ft_striteri(s, f);
// 	printf("After: %s\n", s);
// 	return (0);
// }
