/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:32:56 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/27 22:32:59 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	res;

	pow = power;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--pow)
		res *= nb;
	return (res);
}
/*
int main()
{
	printf("%d",ft_iterative_power(-3, 6));
}*/
