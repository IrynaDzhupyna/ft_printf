# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 15:17:51 by irdzhupy          #+#    #+#              #
#    Updated: 2026/02/13 20:41:27 by irdzhupy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTDIR = Libft
SRCS = ft_printf.c ft_printf_utils.c
OBJS = ${SRCS:.c=.o}

CC = cc
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -f

all: ${NAME}


${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}
.c.o:
	${CC} ${FLAGS} -c $< -o $@
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re:	fclean all

.PHONY: all clean fclean re
