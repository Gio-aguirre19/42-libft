# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/09 21:15:32 by gaguirre          #+#    #+#              #
#    Updated: 2017/06/30 21:06:28 by gaguirre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH = ./srcs/

SRC = $(PATH)ft_isascii.c $(PATH)ft_strcat.c  $(PATH)ft_strlen.c  $(PATH)ft_tolower.c $(PATH)ft_isalnum.c $(PATH)ft_isdigit.c $(PATH)ft_strcpy.c  $(PATH)ft_strncat.c $(PATH)ft_toupper.c $(PATH)ft_isalpha.c $(PATH)ft_isprint.c $(PATH)ft_strdup.c $(PATH)ft_strncpy.c $(PATH)ft_strlcat.c $(PATH)ft_strchr.c $(PATH)ft_strrchr.c $(PATH)ft_strstr.c $(PATH)ft_strnstr.c $(PATH)ft_strcmp.c $(PATH)ft_strncmp.c $(PATH)ft_memset.c $(PATH)ft_bzero.c $(PATH)ft_memcpy.c $(PATH)ft_memccpy.c $(PATH)ft_memmove.c $(PATH)ft_memchr.c $(PATH)ft_memcmp.c $(PATH)ft_memalloc.c $(PATH)ft_atoi.c $(PATH)ft_memdel.c $(PATH)ft_strnew.c $(PATH)ft_strclr.c $(PATH)ft_strdel.c $(PATH)ft_striter.c $(PATH)ft_striteri.c $(PATH)ft_strmap.c $(PATH)ft_strmapi.c $(PATH)ft_strequ.c $(PATH)ft_strnequ.c $(PATH)ft_strsub.c $(PATH)ft_putchar.c $(PATH)ft_putstr.c $(PATH)ft_putendl.c $(PATH)ft_putnbr.c $(PATH)ft_putchar_fd.c $(PATH)ft_putstr_fd.c $(PATH)ft_putendl_fd.c $(PATH)ft_putnbr_fd.c $(PATH)ft_lstnew.c $(PATH)ft_strjoin.c $(PATH)ft_strtrim.c

FLAGS = -Wall -Wextra -Werror

BIN = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(BIN)
		@ar rc $@ $^

%.o: %.c
		@gcc -c $(FLAGS) -Iinclude/ $< -o $@

clean:
		@rm -rf $(BIN)

fclean: clean
		@rm -rf $(NAME)

re: fclean all
