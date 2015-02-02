#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 17:19:02 by amorfan           #+#    #+#              #
#    Updated: 2015/02/02 18:43:19 by amorfan          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAG = -Wall -Wextra -Werror

FILE = ft_memset	\
	ft_bzero		\
	ft_memcpy		\
	ft_memccpy		\
	ft_memmove		\
	ft_memchr		\
	ft_memcmp		\
	ft_strlen		\
	ft_strdup		\
	ft_strndup		\
	ft_strcpy		\
	ft_strncpy		\
	ft_strcat		\
	ft_strncat		\
	ft_strlcat		\
	ft_strchr		\
	ft_strrchr		\
	ft_strstr		\
	ft_strnstr		\
	ft_strcmp		\
	ft_strncmp		\
	ft_atoi			\
	ft_isalpha		\
	ft_isdigit		\
	ft_isalnum		\
	ft_isascii		\
	ft_isprint		\
	ft_toupper		\
	ft_tolower		\
	ft_memalloc		\
	ft_memdel		\
	ft_strnew		\
	ft_strdel		\
	ft_strclr		\
	ft_striter		\
	ft_striteri		\
	ft_strmap		\
	ft_strmapi		\
	ft_strequ		\
	ft_strnequ		\
	ft_strsub		\
	ft_strjoin		\
	ft_strtrim		\
	ft_strsplit		\
	ft_itoa			\
	ft_putchar		\
	ft_putstr		\
	ft_putendl		\
	ft_putnbr		\
	ft_putchar_fd	\
	ft_putstr_fd	\
	ft_putendl_fd	\
	ft_putnbr_fd	\
	get_next_line	\
	ft_printf		\
	ft_count		\
	ft_count_word	\
	ft_lstadd		\
	ft_lstdel		\
	ft_lstdelone	\
	ft_lstiter		\
	ft_lstmap		\
	ft_lstmap		\
	ft_lstnew

SRC = $(addsuffix .c, $(FILE))

OBJ = $(addsuffix .o, $(FILE))

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -I ./includes -c $(SRC)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
