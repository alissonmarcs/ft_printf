# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 10:25:45 by almarcos          #+#    #+#              #
#    Updated: 2023/09/07 17:22:30 by almarcos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -O0

SOURCES = ft_putchar.c ft_putstr.c ft_printf_utils.c ft_printf.c \
	ft_putnbr_base.c ft_putptr.c

OBJECTS_FOLDER = ./obj/
OBJECTS = $(addprefix $(OBJECTS_FOLDER), $(SOURCES:.c=.o))

all: $(OBJECTS_FOLDER) $(NAME)

$(OBJECTS_FOLDER):
	mkdir -p $(OBJECTS_FOLDER)

$(NAME): $(OBJECTS)

$(OBJECTS_FOLDER)%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar rc $(NAME) $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm $(NAME)

re: fclean all

run: all
	@$(CC) $(CFLAGS) main.c $(NAME) && ./a.out
