/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:46:12 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/28 09:46:14 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n * n < nb && n < 46341)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
}
/*
int main()
{
	printf("%d", ft_sqrt(2147395600));
}*/