/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:52:24 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/18 11:32:34 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	find;

	find = (char)c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == find)
			return ((char *)s + len);
		len--;
	}
	if ((char)s[len] == find)
		return ((char *)s + len);
	return (NULL);
}
