/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 08:58:43 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/28 08:58:46 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
int	main()
{
	printf("%d", ft_fibonacci(10));
}*/

/*int	num;
	int prec = 0;
	int ind = 1;
	int temp;
	
	num = 1;
	while (ind < index)
	{ 
		temp = num;
		num += prec;
		prec = temp;
		ind++;
	}
	return (num);*/
