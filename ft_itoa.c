/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:12:04 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:12:04 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* n == 0 なら '0'、n < 0 なら '-' の分を先に1文字数える */
static int	count_num(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*nbchar(long nb, int count, char *str)
{
	if (nb == 0)
	{
		str[0] = '0';
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[count--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	long	nb;
	char	*dest;

	nb = n;
	count = count_num(nb);
	dest = (char *)malloc(sizeof(char) * (count + 1));
	if (!dest)
		return (NULL);
	dest[count--] = '\0';
	return (nbchar(nb, count, dest));
}

// // int	main(void)
// {
// // 	int n = -42;
// // 	int n2 = 42;
// // 	printf("%s", ft_itoa(n));
// // 	printf("%s", ft_itoa(n2));
// // 	printf("%s", ft_itoa(0));
// // 	return (0);
// // }
