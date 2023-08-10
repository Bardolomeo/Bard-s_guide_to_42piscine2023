/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:07:47 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/28 11:07:49 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n;

	n = argc - 1;
	while (n)
	{
		while (*argv[n])
		{
			write(1, argv[n], 1);
			argv[n]++;
		}
		n--;
		write(1, "\n", 1);
	}
	return (0);
}