/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:40:03 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/27 04:32:21 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
	{
		*(str1++) = *(str2++);
	}
	return ((void *)dst);
}
