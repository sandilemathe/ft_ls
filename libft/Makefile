# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smathe <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 15:05:13 by smathe            #+#    #+#              #
#    Updated: 2018/06/14 14:41:31 by smathe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

HEADER  = libft.h

CFLAGS	= -Wall -Werror -Wextra -I.

CC		= gcc -c

FILES	= *.c

OBJ		= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(FILES) $(FLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

fclean:
	rm -f $(OBJ) $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all
