/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:53:58 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/25 10:14:02 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	alphanumeric_check(char cha)
{
	if (cha >= '0' && cha <= 'z')
		if (cha < ':' || cha > '@')
			if (cha < '[' || cha > '`')
				return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (alphanumeric_check(str[i]))
		{
			if (alphanumeric_check(str[i - 1]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] += 32;
				}
			}
			else 
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return 0;
}*/
