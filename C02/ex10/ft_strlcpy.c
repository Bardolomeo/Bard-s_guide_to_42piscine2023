/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:52:39 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 17:26:42 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;

	s = src;
	d = dest;
	n = size;
	if (n != 0)
	{
		while (--n != 0)
		{
			*d = *s++;
			if ((*d) == '\0')
				break ;
			d++;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
/*
int main()
{
	char str[] = "cazzo";
	char str2[30];

	ft_strlcpy(str2, str, 6);
	printf("%s", str2);
}*/
