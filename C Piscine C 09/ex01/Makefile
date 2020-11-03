CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
INCLUDE = -Iincludes
SRC_DIR = srcs
TARGET = libft.a

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@ $(INCLUDE)

$(TARGET) : $(OBJS)
	ar -cr $@ $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)
re : fclean all
