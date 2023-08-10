/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:25:54 by gsapio            #+#    #+#             */
/*   Updated: 2023/08/02 19:25:59 by gsapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# include <unistd.h>
# define FT_BOOLEAN_H 

typedef enum e_bool{
	false,
	true,
}	t_bool;

# define TRUE true
# define FALSE false
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(nbr) (nbr % 2 == 0)
#endif
