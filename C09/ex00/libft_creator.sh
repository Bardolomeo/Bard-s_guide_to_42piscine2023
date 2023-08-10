#!/bin/bash
cc -Wall -Werror -Wextra -c *.c
ar -rsc libft.a *.o
ranlib libft.a
rm *.o
