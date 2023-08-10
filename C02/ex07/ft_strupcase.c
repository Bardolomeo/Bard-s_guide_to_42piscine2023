/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:08:20 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 15:29:42 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	is_alphabetic_lowercase(char cha)
{
	if (cha >= 'a' && cha <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alphabetic_lowercase(str[i]))
			str[i] -= 32;
		i++; 
	}
	return (str);
}
/*
int main()
{	
	char string[] = {"MAdoNNaaBUttANa"};
	printf("%s", ft_strupcase(string));
}
*/
