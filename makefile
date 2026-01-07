# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/06 11:20:58 by bakumcu           #+#    #+#              #
#    Updated: 2026/01/07 15:17:27 by batuhankumc      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_putchar.c ft_strncmp.c ft_strlcat.c ft_isalpha.c ft_isdigit.c


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