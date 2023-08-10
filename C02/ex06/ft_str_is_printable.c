/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:57:54 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 14:05:31 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        printf("%d", ft_str_is_printable("YGDFHJJDSD"));
        printf("%d", ft_str_is_printable("512671hdsdjhbdsSDFGHJK"));
        printf("%d", ft_str_is_printable(""));
        return 0;
} 
*/
