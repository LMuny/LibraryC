/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:43:41 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:57:07 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_len(int n)
{
	int len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char	*str;
	int		len;
	int		isneg;

	if (n == -2147483648)
		return(ft_strdup("-2147483648"));
	isneg = (n < 0);
	len = count_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (isneg)
	{
		str[0] = '-';
		n = -n;
	}
	while (len-- > isneg)
	{
		str[len] = (n % 10 + '0');
		n /= 10;
	}
	return (str);
}

/*
int	main(int ac, char **av)
{
	char	*result;

	if (ac != 2)
	{
		printf("Usage: ./a.out <int>\n");
		return (1);
	}
	result = ft_itoa((ft_atoi(av[1])));
	if (!result)
	{
		printf("No result found");
		return (1);
	}
	printf("Result: %s\n", result);
	free(result);
	return (0);
}
 */
