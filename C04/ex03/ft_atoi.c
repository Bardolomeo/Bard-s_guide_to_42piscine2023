/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:11:17 by gsapio            #+#    #+#             */
/*   Updated: 2023/08/01 19:11:21 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
/*
int main()
{
	printf("%d, ", ft_atoi("    +---++--23456"));
	printf("%d, ", ft_atoi("    +---++-+23456"));
	printf("%d, ", ft_atoi("    +---++--23456sasa"));
	printf("%d, ", ft_atoi("    +---++--bncm23456"));
	printf("%d, ", ft_atoi("    "));
	printf("%d, ", ft_atoi("2147483647"));
	printf("%d, ", ft_atoi("-2147483648"));
}*/
