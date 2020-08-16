NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

CFLAGS = -Wall -Wextra -Werror

INCLUDES = includes

O_FILES = $(SRC:.c=.o)

.PHONY = all clean fclean re
all : $(NAME)

$(NAME): $(O_FILES)
	            ar crs $(NAME) $(O_FILES)

%.o: %.c
	        gcc  $(CFLAGS) -I${INCLUDES} -c $< -o $@

clean:
	            rm -rf $(O_FILES)

fclean: clean
	            rm -f $(NAME)

re : fclean all
