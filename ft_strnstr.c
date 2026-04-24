/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:38:07 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:56:54 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	i = 0;
	if (len <= 0)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] && big[i
				+ j] == little[j])
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*result;
	int		len_input;

	if (ac != 4)
	{
		printf("Usage: ./a.out <big> <little> <len>\n");
		return (1);
	}
	len_input = atoi(av[3]);
	if (len_input <= 0)
	{
		printf("'%s' not found\n", av[2]);
		return (0);
	}
	result = ft_strnstr(av[1], av[2], (size_t)len_input);
	if (result)
		printf("%s\n", result);
	else
		printf("%s not found\n", av[2]);
	return (0);
}
 */
