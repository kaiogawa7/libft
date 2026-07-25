/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:11:48 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/25 10:11:48 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)

{
	return (c >= '0' && c <= '9');
}

// int main (void)
// {
// 	int a = 'a';
// 	int b = '1';
// 	int c = '!';

// 	printf("%d\n", ft_isdigit(a));
// 	printf("%d\n", ft_isdigit(b));
// 	printf("%d\n", ft_isdigit(c));

// 	return (0);

// }
