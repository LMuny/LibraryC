/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:06:15 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 14:21:37 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static char	to_upper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int	main(void)
{
	char	*result;
	char	*test;

	test = "mY NAme IS LudO";
	result = ft_strmapi(test, &to_upper);
	printf("Source: %s\n", test);
	printf("Result: %s\n", result);
	free(result);
	return (0);
}
 */
