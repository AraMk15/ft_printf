NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

MANDATORY = ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c ft_put_uns_int.c ft_puthex_low.c ft_puthex_upp.c ft_putptr.c
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
