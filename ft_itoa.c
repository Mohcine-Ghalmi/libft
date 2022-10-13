/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:03:28 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/12 17:04:03 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	somme;

	somme = 2;
	if (n < 0)
		somme++;
	while (n / 10)
	{
		somme++;
		n = n / 10;
	}
	return (somme);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		b;

	i = 0;
	b = count(n);
	if (n < 0)
		n *= -1;
	str = malloc(sizeof(char) * b);
	if (!str)
		return (NULL);
	str[--b] = '\0';
	while (n / 10)
	{
		str[--b] = (n % 10) + '0';
		n = n / 10;
	}
	str[--b] = n % 10 + '0';
	if (b == 1)
		str[--b] = '-';
	return (str);
}
