/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:30:47 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/14 15:30:40 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t  len;
    size_t  i;
    char    *str;

    i = 0;
    if (!s || !f)
        return (0);
    len = ft_strlen(s);
    str = malloc(sizeof(char) * (len + 1));
        return (0);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int mian()
{
	
}