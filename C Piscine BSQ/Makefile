# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 19:11:32 by jseo              #+#    #+#              #
#    Updated: 2020/11/05 00:17:23 by jseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -f
NAME		= BSQ
INCS_DIR	= includes
SRCS_DIR	= ./srcs
SRCS		= ${wildcard ${SRCS_DIR}/*.c}
OBJS		= ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS_DIR}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm:
	norminette -R CheckForbiddenSoureHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
