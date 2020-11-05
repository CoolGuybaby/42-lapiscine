# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 19:11:32 by jseo              #+#    #+#              #
#    Updated: 2020/11/05 04:09:25 by ycha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -f
NAME		= bsq
INCS_DIR	= includes
SRCS		= ./srcs/main.c ./srcs/ft_array.c ./srcs/ft_core.c ./srcs/ft_grid.c ./srcs/ft_io.c ./srcs/ft_is.c ./srcs/ft_number.c ./srcs/ft_parse.c ./srcs/ft_string.c
OBJS		= ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS_DIR}

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
