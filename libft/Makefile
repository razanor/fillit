# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aorji <aorji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:44:07 by aorji             #+#    #+#              #
#    Updated: 2017/11/17 19:43:20 by aorji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_putnbr_fd.c ft_lstiter.c ft_min.c ft_max.c ft_lstmap.c ft_count_words.c ft_digitsize.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_itoa.c ft_lstnew.c ft_strequ.c ft_putnbr.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putchar.c ft_putendl.c ft_putstr.c ft_strsplit.c ft_strtrim.c ft_strjoin.c ft_strsub.c ft_strnequ.c ft_isprint.c ft_strmapi.c ft_striter.c ft_strmap.c ft_striteri.c ft_strclr.c ft_strnew.c ft_strdel.c ft_memdel.c ft_memalloc.c ft_toupper.c ft_isdigit.c ft_strlcat.c ft_isalnum.c ft_isascii.c ft_atoi.c ft_isalpha.c ft_strcmp.c ft_strncmp.c ft_strstr.c ft_memcpy.c ft_strnstr.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_tolower.c ft_strncat.c ft_strchr.c ft_strrchr.c 
INC = includes/
FLG = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ ar rc $(NAME) $(OBJ)

clean:
	@ /bin/rm -f $(OBJ)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all

%.o: %.c
	@ gcc $(FLG) -c -o $@ $<