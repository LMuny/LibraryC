/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 22:00:33 by marvin            #+#    #+#             */
/*   Updated: 2026/04/24 22:00:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *head)
{
	int i;

	i = 0;
	while (head)
	{
		i++;
		head = head -> next;
	}
	return (i);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_lstsize(av[1]));
	return (0);
}
*/
