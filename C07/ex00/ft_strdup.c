/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:27:53 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/31 18:27:56 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*duplicate;
	char	*buffer;

	len = 0;
	if (src == 0)
	{
		duplicate = 0;
		return (duplicate);
	}
	while (src[len])
		len++;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
	{
		duplicate = NULL;
		return (duplicate);
	}
	duplicate = buffer;
	len = -1;
	while (src[++len])
		duplicate[len] = src[len];
	duplicate[len] = '\0';
	return (duplicate);
}
/*
int main()
{
	//char *suca;
	printf("%s\n", ft_strdup("abcdefghijABCDEFG34567890!@#$%^&*()"));
	//printf("%s\n", ft_strdup(suca));
	//	printf("%s\n", ft_strdup(""));
	
}*/
