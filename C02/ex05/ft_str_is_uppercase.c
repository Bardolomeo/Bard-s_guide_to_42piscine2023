/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:27:58 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 13:50:51 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        printf("%d", ft_str_is_uppercase("YGDFHJJDSD"));
        printf("%d", ft_str_is_uppercase("512671hdsdjhbdsSDFGHJK"));
        printf("%d", ft_str_is_uppercase(""));
        return 0;
} 
*/
