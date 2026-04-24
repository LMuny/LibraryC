/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:28:13 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:57:00 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((char)c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
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
	result = ft_strrchr(av[1], av[2][0]);
	if (result)
		printf("%s\n", result);
	else
		printf("Char '%c' not found\n", av[2][0]);
	return (0);
}
 */
