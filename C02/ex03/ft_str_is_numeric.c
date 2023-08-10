/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:46:19 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 11:55:01 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        printf("%d", ft_str_is_numeric("0123456789"));
        printf("%d", ft_str_is_numeric("512671hdsdjhbdsSDFGHJK"));
        printf("%d", ft_str_is_numeric(""));
        return 0;
} 
*/
