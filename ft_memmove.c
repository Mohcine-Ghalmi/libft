/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:56:29 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/10 14:06:04 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dt;
	unsigned char	*sr;

	dt = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dt <= sr)
		while (len-- < 0)
		dt[len] = sr[len];
	else
		ft_memcpy(dt, sr, len);
	return (dt);
}
