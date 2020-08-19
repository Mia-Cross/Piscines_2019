# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefileR02                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frlefebv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 19:45:18 by frlefebv          #+#    #+#              #
#    Updated: 2019/07/21 20:56:05 by frlefebv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02
SRCS_P = ./srcs/
HEADER = ./includes/
SRCS = ${SRCS_P}nom1.c ${SRCS_P}nom2.c
CC = gcc
OPTION = -I $(HEADER)
CFLAGS = -Wall -Werror -Wextra $(OPTION)
OBJS = $(SRCS:.c=.o)

all = $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean :
		rm -rf $(NAME)

re : fclean all
