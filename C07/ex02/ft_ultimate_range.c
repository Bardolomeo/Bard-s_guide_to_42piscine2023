/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:34:02 by gsapio            #+#    #+#             */
/*   Updated: 2023/08/01 19:34:07 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buffer = (int *)malloc(sizeof(int) * (max - min));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main()
{
	int *range;
	printf("%d\n", ft_ultimate_range(&range, -3, 7));
	for(int i = 0; i < 10; i++)
		printf("%d", range[i]);
}*/
