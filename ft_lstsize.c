/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:14:48 by mghalmi           #+#    #+#             */
/*   Updated: 2022/10/19 14:26:35 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

int main()
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	head = ft_lstnew("hey");
	second = ft_lstnew("you");
	third = ft_lstnew("yes");

	printf("%d", ft_lstsize(head));
}