/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:46:20 by gsapio            #+#    #+#             */
/*   Updated: 2023/08/01 14:46:25 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	*buffer;

	if (min >= max)
		return (NULL);
	i = 0;
	buffer = (int *)malloc(sizeof(int) * (max - min));
	if (!buffer)
	{
		range = NULL;
		return (range);
	}
	range = buffer;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int main()
{
	int	min = 0;
	int	max	= 100;
	int *range = ft_range(min, max);
	int i = 0;
	
	while (i < (max - min))
	{
		printf("%d ", range[i++]);
	}
}*/
