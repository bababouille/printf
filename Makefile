NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC =	ft_printf.c \
		ft_putlstr.c \
		ft_putlnbr.c \
		ft_putlhex.c \
		ft_putptr.c \
		ft_putlchar.c \

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