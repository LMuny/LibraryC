/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:25:51 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:55:58 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*sstr;

	i = 0;
	j = 0;
	sstr = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!sstr)
		return (NULL);
	while (s1[j])
		sstr[i++] = s1[j++];
	j = 0;
	while (s2[j])
		sstr[i++] = s2[j++];
	sstr[i] = '\0';
	return (sstr);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	const char	*result;

	if (ac != 3)
	{
		printf("Usage: ./a.out <prefix string> <suffix string>\n");
		return (1);
	}
	result = ft_strjoin(av[1], av[2]);
	if (!result)
	{
		printf("No result found");
		return (1);
	}
	printf("Source: %s - %s\n", av[1], av[2]);
	printf("Result: %s\n", result);
	return (0);
}
 */
