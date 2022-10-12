/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:04:52 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/10 15:28:26 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	res = malloc((sizeof(char) * (len - start) + 1));
	if (!s || !res)
		return (NULL);
	res = ft_memcpy(res, (char *)&s[start], len);
	res[len - start] = '\0';
	return (res);
}
