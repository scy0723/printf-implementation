# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 18:31:42 by chashin           #+#    #+#              #
#    Updated: 2022/10/27 18:31:43 by chashin          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
cc = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = \
	  ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_itoa.c \
	  ft_puthex.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^
	ar crsu $(NAME) $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re