/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:30:47 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/14 17:01:35 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
