/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:11:33 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/28 11:11:36 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1)
	{
		if (*str1 != *str2)
		{
			break ;
		}
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	sort(char	**matrix, int argc)
{
	int	swap_flag;
	int	incr;

	swap_flag = 1;
	incr = 2;
	while (swap_flag)
	{
		incr = 2;
		swap_flag = 0;
		while (incr < argc)
		{
			if (ft_strcmp(matrix[incr - 1], matrix[incr]) > 0)
			{
				swap(&matrix[incr - 1], &matrix[incr]);
				swap_flag = 1;
			}
			incr++;
		}
	}
}

int	check_exceptions(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	if (argc == 2)
	{
		while (*argv[1] != '\0')
		{
			write(1, argv[1]++, 1);
		}
		write(1, "\n", 1);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n;
	int	c;

	n = 1;
	c = 0;
	if (check_exceptions(argc, argv))
		return (0);
	sort(argv, argc);
	while (n < argc)
	{
		while (*argv[n])
		{
			write(1, argv[n], 1);
			argv[n]++;
		}
		n++;
		write(1, "\n", 1);
	}
	return (0);
}
