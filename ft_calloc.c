/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:49:13 by lmuny             #+#    #+#             */
/*   Updated: 2026/04/24 11:56:07 by lmuny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t slots, size_t bitsize)
{
	void	*memzone;

	if (bitsize != 0 && slots > SIZE_MAX / bitsize)
		return (NULL);
	memzone = malloc(slots * bitsize);
	if (!memzone)
		return (NULL);
	ft_bzero(memzone, slots * bitsize);
	return (memzone);
}
/*
#define INT_NUMBER 12
#include <assert.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*pointer;

	pointer = (int *)ft_calloc(INT_NUMBER, sizeof(int));
	if(!pointer)
		return (0);
	for (i = 0; i < INT_NUMBER - 1; i++)
	{
		pointer[i] = i;
	}
	for (i = 0; i < INT_NUMBER; i++)
	{
		printf("%d ", pointer[i]);
	}
	printf("\n");
	free(pointer);
	return (0);
}
 */
