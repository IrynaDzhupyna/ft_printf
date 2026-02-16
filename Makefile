# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 15:17:51 by irdzhupy          #+#    #+#              #
#    Updated: 2026/02/16 21:56:22 by irdzhupy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTDIR = Libft
LIBFT = ${LIBFTDIR}/libft.a

SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils_2.c
OBJS = ${SRCS:.c=.o}

CC = cc
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -f

all: ${NAME}

${LIBFT}:
	${MAKE} -C ${LIBFTDIR}

${NAME}: ${LIBFT} ${OBJS}
	cp ${LIBFT} ${NAME}
	ar -rcs ${NAME} ${OBJS}
.c.o:
	${CC} ${FLAGS} -c $< -o $@
clean:
	rm -f ${OBJS}
	${MAKE} -C ${LIBFTDIR} clean

fclean: clean
	rm -f ${NAME}
	${MAKE} -C ${LIBFTDIR} fclean

re:	fclean all

.PHONY: all clean fclean re
