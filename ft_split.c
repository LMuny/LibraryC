/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:32:42 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 16:42:19 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, int j)
{
	while (j > 0)
		free(split[j--]);
	free(split);
}

static int	count_word(char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != sep && (i == 0 || str[i - 1] == sep))
			count++;
		i++;
	}
	return (count);
}

static char	*copy_word(char *str, char sep)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != sep)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	char	**result;

	result = malloc(sizeof(char *) * (count_word((char *)s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[index] = copy_word((char *)&s[i], c);
			if (!result[index])
				return (free_split(result, index), (NULL));
			index++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	result[index] = NULL;
	return (result);
}

int	main(int ac, char **av)
{
	size_t	i;
	char	**result;

	if (ac != 3)
		return (printf("Usage: ./a.out <string> char>\n"), 1);
	result = ft_split((const char *)av[1], (char)av[2][0]);
	if (!result)
		return (printf("No result found\n"), 1);
	i = 0;
	while (result[i])
	{
		printf("Result: %s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
