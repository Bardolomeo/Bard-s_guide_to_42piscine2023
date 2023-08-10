/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:00:04 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 11:13:47 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start;
	unsigned int	i;

	i = n;
	start = dest;
	while (*src != '\0' && i--)
	{
		*start++ = *src++;
	}
	if (*src == '\0')
	{
		while (i--)
		{
			*start++ = '\0';
		}
	}
	return (dest);
}
/*
int main()
{
	char string[10] = "puppu";
	char string1[10] = "puppu";
	ft_strncpy(string, "asdfghjklzxc", 7);
	strncpy(string1, "asdfghjklzxc", 7);
	printf("%s\n%s", string, string1); 
}*/
