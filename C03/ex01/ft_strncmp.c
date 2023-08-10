/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:35:59 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/25 14:40:09 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	nb;

	nb = n;
	if (nb == 0)
		return (0);
	while (nb-- != 0) 
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (*s1++ == 0)
			break ;
	}
	return (0);
}
/*
int	main()
{
	char prova[20] = "0123456789abcdefhio";
	char prova2[20] = "a123456789abcdefhio";
	printf("%d, %d", ft_strncmp(prova, prova2, 20), strncmp(prova, prova2, 20));
}
*/
