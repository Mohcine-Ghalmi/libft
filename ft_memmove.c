/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:56:29 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/27 04:32:15 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dt;
	char	*sr;

	dt = (char *)dest;
	sr = (char *)src;
	if (!src && !dest)
		return (NULL);
	if (dt >= sr)
		while (len-- > 0)
			dt[len] = sr[len];
	else
		ft_memcpy(dt, sr, len);
	return ((void *)dt);
}
