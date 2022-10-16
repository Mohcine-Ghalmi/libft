/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:03:24 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/16 15:00:38 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_sep(char s1, char const *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*str;
	int		i;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (check_sep(s1[end], set))
		end--;
	while (check_sep(s1[start], set))
		start++;
	str = malloc((sizeof(char) * (end - start + 1)));
	while (s1[start] && start <= end)
		str[i++] = s1[start++];
	return (str);
}
