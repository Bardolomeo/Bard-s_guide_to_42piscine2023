/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:41:38 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/29 10:41:42 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	n;
	int	number;

	if (nb < 0)
		return (0);
	else
		number = nb;
	if (number <= 1)
		return (0);
	n = 2;
	while (n < number)
	{
		if (number % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
int main()
{
	printf("%d", ft_is_prime(14));
	printf("%d", ft_is_prime(11));
	printf("%d", ft_is_prime(-14));
	printf("%d", ft_is_prime(-11));
	printf("%d", ft_is_prime(INT_MAX));
}*/
