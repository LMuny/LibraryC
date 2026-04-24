/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 08:38:03 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:55:56 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*result;

	if (ac != 3)
	{
		printf("Usage: ./a.out <string> <char>\n");
		return (1);
	}
	result = ft_strchr(av[1], av[2][0]);
	if (result)
		printf("%s\n", result);
	else
		printf("Char '%c' not found\n", av[2][0]);
	return (0);
}
 */
