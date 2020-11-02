# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 11:32:16 by jseo              #+#    #+#              #
#    Updated: 2020/11/02 19:52:58 by jseo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = 
LDFLAGS =
INCLUDE = -Iinclude/
SRC_DIR = ./src
OBJ_DIR = ./obj
TARGET = BSQ

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

OBJECTS = $(patsubst %.o, $(OBJ_DIR)/%.o, $(OBJS))
DEPS = $(OBJECTS:.o=.d)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ -MD $(LDFLAGS)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

.PHONY : fclean
fclean :
	rm -f $(OBJECTS) $(DEPS) $(TARGET)

-include $(DEPS)
