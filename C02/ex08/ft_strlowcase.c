/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:44:33 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 16:41:03 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>
int	is_alphabetic_uppercase(char cha)
{
	if (cha >= 'A' && cha <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alphabetic_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main()
{       
        char string[] = {"MAdoNNaaBUttANa"};
        printf("%s", ft_strlowcase(string));
}
*/
