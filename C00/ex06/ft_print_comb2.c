/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:30:43 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/21 08:42:39 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char *left_x, char *left_y, char *right_a, char *right_b)
{
	while (*right_b != '9' + 1)
	{
		write(1, left_x, 1);
		write(1, left_y, 1);
		write(1, " ", 1);
		write(1, right_a, 1);
		write(1, right_b, 1);
		if (*left_x == '9' && *left_y == '8')
		{
		}
		else
			write(1, ", ", 2);
		(*right_b)++;
	}
}

char	loop(char *x, char *y, char *a, char *b)
{
	char	is_incr;

	is_incr = '1';
	while (*y != '9' + 1)
	{
		*a = *x;
		while (*a != '9' + 1)
		{
			if (is_incr == '1')
			{
				*b = *y + 1;
				is_incr = '0';
			}
			else
				*b = '0';
			print_numbers(x, y, a, b);
			(*a)++;
		}
		(*y)++;
		is_incr = '1';
	}
	return (is_incr);
}

void	ft_print_comb2(void)
{
	char	right_a;
	char	right_b;
	char	left_x;
	char	left_y;
	char	is_incr;

	left_y = '0';
	left_x = '0';
	right_a = '0';
	right_b = '0';
	is_incr = '1';
	while (left_x != '9' + 1 && left_y != '9')
	{
		left_y = '0';
		is_incr = loop(&left_x, &left_y, &right_a, &right_b);
		left_x++;
		is_incr = '1';
	}
}
