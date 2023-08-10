/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:59:55 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/29 10:59:58 by gsapio           ###   ########.fr       */
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
	while (n < number / n)
	{
		if (number % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	if (nb == INT_MAX)
		return (INT_MAX);
	if (nb == INT_MIN)
		return (2);
	n = nb;
	while (!ft_is_prime(n))
		n++;
	return (n);
}
/*
int main()
{
	printf("%d ", ft_find_next_prime(INT_MAX));
	printf("%d ", ft_find_next_prime(INT_MIN));
	printf("%d ", ft_find_next_prime(-7));
}*/
