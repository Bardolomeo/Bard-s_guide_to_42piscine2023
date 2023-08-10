/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:29:55 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/25 17:30:02 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	if ((dest == 0) && (src == 0))
		return (0);
	start = dest;
	while (*start != '\0')
	{
		start++;
	}
	while (*src != '\0')
	{
		*start++ = *src++;
	}
	*start = '\0';
	return (dest);
}
/*
int main()
{
	char str[30];
	printf("%s", ft_strcat(str, "Cristo"));
}*/
