/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:28:01 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/09 11:10:07 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const	char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = ft_strlen(dst);
	res = i + 1;
	j = 0;
	if (destsize)
	{
		while (src[j] && destsize-- > 0)
		{
			dst[i++] = src[j++];
		}
	dst[i] = '\0';
	}
	return (res);
}
