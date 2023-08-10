/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:48:10 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/19 17:51:49 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_sequence(char first, char middle, char last)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &first, 1);
	write(1, &middle, 1);
	write(1, &last, 1);
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	print_final(char first, char middle, char last)
{
	write(1, &first, 1);
	write(1, &middle, 1);
	write(1, &last, 1);
}

void	ft_print_comb(void)
{
	char	last;
	char	middle;
	char	first;

	first = '0';
	while (first != '7' + 1)
	{
		middle = first + 1;
		while (middle != '8' + 1)
		{
			last = middle + 1;
			while (last != '9' + 1)
			{
				if (first == '7' && middle == '8' && last == '9')
					print_final(first, middle, last);
				else
					print_sequence(first, middle, last);
				last++;
			}
			middle++;
		}
		first++;
	}
}
