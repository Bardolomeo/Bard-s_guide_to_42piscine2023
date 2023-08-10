/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:21:24 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/25 10:11:02 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include<stdio.h>
void	print_hex_xx(char cha)
{
	char	hexadec[3];
	int		i;
	int		cha_int;

	if (cha < 0)
		cha_int = cha + 256;
	else
		cha_int = cha;
	i = 2;
	hexadec[0] = '\\';
	while (cha_int > 0)
	{
		if (cha_int % 16 < 10)
			hexadec[i] = cha_int % 16 + '0';
		if (cha_int % 16 >= 10)
			hexadec[i] = cha_int % 16 + ('a' - 10);
		cha_int /= 16;
		i--;
	}
	write(1, hexadec, 3);
}

void	print_hex_0x(char cha, char *tmp)
{
	write(1, "\\0", 2);
	if (cha < 10)
	{
		*tmp = cha + 48;
		write(1, tmp, 1);
	}
	else
	{
		*tmp = cha + 87;
		write(1, tmp, 1);
	}
}

void	print_hex(char cha)
{
	char	tmp;

	if (cha < 16 && cha > 0)
	{
		print_hex_0x(cha, &tmp);
	}
	else
	{
		print_hex_xx(cha);
	}
}

void	ft_putstr_non_printable(char *str)
{
	if (str == 0)
		return ;
	while (*str)
	{
		if (*str < 32 || *str > 126)
			print_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}
/*
int main()
{	
	char	c = 20;
	
	printf("\n\n");
	char str[] = "Coucou\ntu\a vas\r bien\f ?";
	ft_putstr_non_printable(str);
	ft_putstr_non_printable(&c);
}*/
