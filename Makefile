NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f
AR      = ar rcs

HEADER  = ft_printf.h

SRCS    = ft_printf.c ft_printf_utils.c ft_printf_utils_format.c
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re