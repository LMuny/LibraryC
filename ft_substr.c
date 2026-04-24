/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:54:45 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:57:12 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sstr;

	if (!len || !s || start > (unsigned int)ft_strlen((char *)s))
		return (NULL);
	sstr = malloc(sizeof(char) * (len + 1));
	if (!sstr)
		return (NULL);
	i = 0;
	while (s[start] && len != 0)
	{
		sstr[i++] = s[start];
		start++;
		len--;
	}
	sstr[i] = '\0';
	return (sstr);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	const char	*result;

	if (ac != 4)
	{
		printf("Usage: ./a.out <string> <start> <length>\n");
		return (1);
	}
	result = ft_substr((char const *)av[1], (unsigned int)ft_atoi(av[2]),
			(size_t)ft_atoi(av[3]));
	if (!result)
	{
		printf("No result found\n");
		return (1);
	}
	printf("Source: %s\n", av[1]);
	printf("Result: %s\n", result);
	return (0);
}
 */
