# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrelli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 15:01:03 by megrelli          #+#    #+#              #
#    Updated: 2025/07/23 15:02:44 by megrelli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

SRCS = src/main.c src/parsing_stdin.c src/parsing_utils.c src/parsing.c \
src/print.c src/solve_utils.c src/solve.c src/utils.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
