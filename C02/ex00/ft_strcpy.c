/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:18:54 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 10:57:28 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *source)
{
	int	i;

	i = 0;
	while (1)
	{
		dest[i] = source[i];
		if (dest[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (dest);
}
/*
int main()
{
	char dest[12];
	ft_strcpy(dest, "lussemburgo");
	printf("%s", dest):
} */
