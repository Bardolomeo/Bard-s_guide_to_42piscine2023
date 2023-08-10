/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:10:04 by gsapio            #+#    #+#             */
/*   Updated: 2023/07/22 19:31:13 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	dx_index;
	int	sx_index;

	dx_index = size - 1;
	sx_index = 0;
	while (sx_index < dx_index)
	{
		tmp = tab[sx_index];
		tab[sx_index] = tab[dx_index];
		tab[dx_index] = tmp;
		sx_index++;
		dx_index--;
	}
}
