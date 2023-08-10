/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:54 by gsapio            #+#    #+#             */
/*   Updated: 2023/08/02 10:14:57 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	join_ini(int size, char **strs, char *joint, char *sep)
{
	int	k;
	int	i;
	int	j;
	int	len;
	int	sep_len;

	sep_len = ft_strlen(sep);
	len = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]) + 1)
		{
			if (!strs[i][j] && i < size - 1)
			{
				k = -1;
				while (++k < sep_len)
					joint[len++] = sep[k];
			}
			else
				joint[len++] = strs[i][j];
			j++;
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joint;
	int		len;
	int		i;
	int		sep_len;

	if (!size)
	{
		joint = (char *)malloc(sizeof(char) * 1);
		*joint = '\0';
	}
	sep_len = ft_strlen(sep);
	len = 0;
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	joint = (char *)malloc(sizeof(char) * (len + (sep_len * size)));
	join_ini(size, strs, joint, sep);
	return (joint);
}
/*
int	main()
{
	char	*strs[] = {"stringa1", "stringa2", "stringa3", "stringa4"};
	char 	sep[] = "SEP";
	printf("%s", ft_strjoin(4, strs, sep));
}*/
