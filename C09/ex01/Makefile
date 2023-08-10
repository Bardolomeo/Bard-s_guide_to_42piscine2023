# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsapio <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 13:44:01 by gsapio            #+#    #+#              #
#    Updated: 2023/08/05 13:44:05 by gsapio           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
NAME = libft.a
OBJS = ${SRCS:.c=.o}

.c.o:
	cc -Wall -Wextra -Werror -c $< -o ${<:.c=.o} -I includes
${NAME}: ${OBJS}
	ar rcs libft.a ${OBJS}
	ranlib libft.a
all: ${NAME}
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f libft.a
re: fclean all
