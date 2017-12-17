# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsabouri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/17 16:36:38 by hsabouri          #+#    #+#              #
#    Updated: 2017/12/17 17:07:56 by hsabouri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = quine
CFLAGS = -Wall -Wextra -Werror
CC = clang
SRC = Colleen.c Grace.c Sully.c
OBJ	= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) Colleen.c -o Colleen
	$(CC) $(CFLAGS) Grace.c -o Grace
	$(CC) $(CFLAGS) Sully.c -o Sully

%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	rm -rf $(OBJ)

.PHONY: fclean
fclean: clean
	rm -rf $(SRC:%.c=%)

re: fclean
	$(MAKE) all
