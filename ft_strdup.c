/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 09:36:16 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:57:05 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(src);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	len = 0;
	while (src[len])
	{
		copy[len] = src[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	const char	*result;

	if (ac != 2)
	{
		printf("Usage: ./a.out <string>\n");
		return (1);
	}
	result = ft_strdup(av[1]);
	if (!result)
	{
		printf("No result found");
		return (1);
	}
	printf("Source: %s\n", av[1]);
	printf("Copy  : %s\n", result);
	free(result);
	return (0);
}
 */
