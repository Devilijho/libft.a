# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: safuente <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 11:23:14 by safuente          #+#    #+#              #
#    Updated: 2024/11/10 11:27:30 by safuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	a.out

SRC	=	*.c

all	=	${NAME}

${NAME}:
	${CC} ${CFLAGS} -o ${NAME} ${SRC}

clean:
	rm -f *o

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: clean fclean re all