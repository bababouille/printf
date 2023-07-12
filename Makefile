NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC =	ft_printf.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_puthex.c \
		ft_putptr.c \
		ft_putchar.c \

OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re