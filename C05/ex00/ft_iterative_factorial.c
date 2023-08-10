/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:49:48 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/27 18:49:50 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb == 0)
		return (1);
	n = 1;
	while (nb != 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
/*
int main()
{
	printf("%d", ft_iterative_factorial(3));
}*/
