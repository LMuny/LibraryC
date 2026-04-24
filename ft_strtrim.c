/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:59:54 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:57:10 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charchr(const char *s, char c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_charchr(set, s1[start]))
		start++;
	while (ft_charchr(set, s1[end]))
		end--;
	copy = ft_substr(s1, start, end - start + 1);
	if (!copy)
		return (NULL);
	return (copy);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*result;

	if (ac != 3)
	{
		printf("Usage: ./a.out <string> <charset>\n");
		return (1);
	}
	result = ft_strtrim(av[1], av[2]);
	if (!result)
	{
		printf("No result found\n");
		return (1);
	}
	printf("Source: '%s' - '%s'\n ", av[1], av[2]);
	printf("Result: '%s'\n", result);
	free (result);
	return (0);
}
 */
