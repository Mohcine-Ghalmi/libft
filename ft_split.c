/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:51:03 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/12 17:01:41 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
			word++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word);
}

int	word_size(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		wc++;
		i++;
	}
	return (wc);
}

char	*words(char const *s, char c)
{
	int		wrld_len;
	int		i;
	char	*word;

	i = 0;
	wrld_len = word_size(s, c);
	word = malloc(sizeof(char) * (wrld_len + 1));
	while (i < wrld_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			str[j++] = words(&s[i], c);
			i++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	str[j] = 0;
	return (str);
}
