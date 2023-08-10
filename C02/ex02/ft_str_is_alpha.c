/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:18:55 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/24 11:43:02 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	is_btw_upperz_lowera(char *str, int i)
{
	if (str[i] < 'Z' && str[i] > 'a')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || is_btw_upperz_lowera(str, i) || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("%d", ft_str_is_alpha("asgfasFAGBSJSVS"));
	printf("%d", ft_str_is_alpha("asgfa26121FAGSHA='"));
	printf("%d", ft_str_is_alpha(""));
	return 0;
} 
*/
