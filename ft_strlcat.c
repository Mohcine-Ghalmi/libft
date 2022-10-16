/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:28:01 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/16 17:07:38 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const	char *src, size_t destsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (destsize < dst_len + 1)
		return (destsize + src_len);
	if (size > dst + 1)
	{
		
	}
}

int main()
{
    // char b[30]; memset(b, 0, 30);
    char str[1000] = "hello";
    char str_2[] = "world";
    // char s[] = "12345";
    // char b[] = "";
    // printf("%zu\n", ft_strlcat(b,s,0));
    printf("%lu", ft_strlcat(str, str_2,10));
    printf("|%s|\n", str);
}
