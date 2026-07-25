/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:11:04 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:11:04 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nprt)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while ((*nprt >= '\t' && *nprt <= '\r') || *nprt == ' ')
		nprt++;
	if (*nprt == '-')
		sign = -1;
	if (*nprt == '-' || *nprt == '+')
		nprt++;
	while (*nprt >= '0' && *nprt <= '9')
		num = num * 10 + *nprt++ - '0';
	return (num * sign);
}

// int	main(void)
// {
// 	char	str[] = " -123456712259";
// 	int		res;

// 	res = ft_atoi(str);
// 	printf("Result: %d\n", res);
// 	printf("honke: %d\n", atoi(str));
// 	return (0);
// }
