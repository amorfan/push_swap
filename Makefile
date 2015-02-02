#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/26 20:46:20 by amorfan           #+#    #+#              #
#    Updated: 2013/12/26 20:46:28 by amorfan          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap

SRC = push_swap.c main.c ft_sort.c element.c rotate.c

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	make -C libft/
	gcc $(FLAG) $(SRC) -o $(NAME) libft/libft.a

fclean:
	make fclean -C libft/
	/bin/rm -f $(NAME)

re: fclean all
