NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextr -Werror
AR = ar -rcs

MANDATORY = ft_putchar.c ft_putstr.c
OBJS = $(MANDATORY:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: flcean all

.PHONY: all clean fclean re
