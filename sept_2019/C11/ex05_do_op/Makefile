NAME        =    do-op

SRCS        =    srcs/ft_atoi.c        \
				 srcs/ft_operators.c    \
				 srcs/ft_putnbr.c        \
				 srcs/do_op.c

OBJ        =    $(SRCS:.c=.o)

CFLAGS        =    -Wall -Wextra -Werror -I./Includes

all:    $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:    fclean all

.PHONY:    all clean fclean re
