# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/06 11:20:58 by bakumcu           #+#    #+#              #
#    Updated: 2026/01/10 00:00:05 by bakumcu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_putchar.c ft_bzero.c ft_calloc.c ft_strncmp.c ft_strlcat.c ft_isalpha.c ft_isdigit.c ft_substr.c ft_strdup.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

banana:
	@echo "tm."

TEST = TEST

main: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -I. -o $(TEST)