/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:55:52 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 12:12:18 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        printf("%d", ft_str_is_lowercase("asdfghjk"));
        printf("%d", ft_str_is_lowercase("512671hdsdjhbdsSDFGHJK"));
        printf("%d", ft_str_is_lowercase(""));
        return 0;
} 
*/
