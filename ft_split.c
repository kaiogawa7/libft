/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:14:10 by kaogawa           #+#    #+#             */
/*   Updated: 2026/07/28 00:59:26 by kaogawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static void	mem_free(char **words, int j)
{
	j--;
	while (j >= 0)
	{
		free(words[j]);
		j--;
	}
	free(words);
}

static char	*word_splitter(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	fill_words(char const *s, char c, char **words)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			words[j] = word_splitter(&s[i], c);
			if (!words[j])
			{
				mem_free(words, j);
				return (0);
			}
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	words[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words)
		return (NULL);
	if (!fill_words(s, c, words))
		return (NULL);
	return (words);
}

// int	main(void)
// {
// 	const char	*str = "I am Yumi Sekioka";
// 	char		c;
// 	char		**words;
// 	int			i;

// 	c = ' ';
// 	words = ft_split(str, c);
// 	if (!words)
// 	{
// 		dprintf(2, "ft_split returned NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (words[i])
// 	{
// 		printf("word[%d] = \"%s\"\n", i, words[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (words[i])
// 	{
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (0);
// }
